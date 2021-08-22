using namespace std;
#include <stdio.h>      //              Language  C                   //
#include <iostream>     //              Language  C++                 //
#include <string.h>     //             Input Letter                   //
#include <stdlib.h>     //            system("clear");                //
#include <time.h>       //             /* timer 1 */                  //
#include <ctime>        //             /* timer 2 */                  //
#include <unistd.h>     // /* library of " getch "                 */ //
#include <termios.h> 

typedef float ItemType;
//typedef int ItemType;
//typedef string ItemType;


class BSTNodeClass {
	private:
		ItemType Info;
		BSTNodeClass *Left, *Right;
	public:
		BSTNodeClass(const ItemType &Item, BSTNodeClass *LeftPtr=NULL,BSTNodeClass *RightPtr=NULL) : Info(Item),Left(LeftPtr),Right(RightPtr){
		}
		void GetInfo(ItemType &TheInfo) const{
			TheInfo = Info;   // assumes assignment works on this type
		}
		friend class BSTClass;
};


typedef BSTNodeClass *BSTNodePtr;


class BSTClass{
	private:
                
		BSTNodePtr GetNode(const ItemType &Item,BSTNodePtr LeftPtr = NULL, BSTNodePtr RightPtr = NULL){
			BSTNodePtr NodePtr;
			NodePtr = new BSTNodeClass(Item, LeftPtr, RightPtr);
			if (NodePtr == NULL){
				cerr << "Memory allocation error!" << endl;
				exit(1);
			}
			return NodePtr;
		}
		BSTNodePtr SubtreeFind(BSTNodePtr Current,const ItemType &Item) const{
			if (Current == NULL)
				return NULL;
			else if (Item == Current->Info)
				return Current;
			else if (Item < Current->Info)
				return SubtreeFind(Current->Left,Item);
			else
				return SubtreeFind(Current->Right,Item);
		}
		void FreeNode(BSTNodePtr NodePtr){
			delete NodePtr;
		}
		void ClearSubtree(BSTNodePtr Current){
			if (Current != NULL){
				ClearSubtree(Current->Left);
				ClearSubtree(Current->Right);
				FreeNode(Current);
			}
		}
		void ClearTree(void){
			ClearSubtree(Root);
			Root = NULL;
			Count = 0;
		}
		int Count;
		BSTNodePtr Root;
	public:
		BSTClass(void){
			Root = NULL;
			Count = 0;
		}
		BSTNodePtr Find(const ItemType & Item) const{
			return SubtreeFind(Root, Item);
		}
		~BSTClass(void){
			ClearTree();
		}
		int NumItems(void) const{
			return Count;
		}
		bool Empty(void) const{
			if (Count > 0)
				return false;
			else
				return true;
		}
		void Insert(const ItemType &Item){
			BSTNodePtr Current, Parent, NewNodePtr;
			Current = Root;
			Parent = NULL;
			while (Current != NULL){
				Parent = Current;
				if (Item < Current->Info)
					Current = Current->Left;
				else
					Current = Current->Right;
			}

			NewNodePtr = GetNode(Item, NULL, NULL);
			if (Parent == NULL)
				Root = NewNodePtr;
			else if (Item < Parent->Info)
				Parent->Left = NewNodePtr;
			else
				Parent->Right = NewNodePtr;

			Count++;
		}

};
int main(void){
	BSTClass BST;
	BSTNodePtr Result;

	string ch;
	do{
		cout<<"------------------------------"<<endl;
		cout<<"|  1 = Insert                |"<<endl;
		cout<<"|  2 = search                |"<<endl; 
		cout<<"|  3 = printInOrder          |"<<endl; 
		cout<<"|  4 = destroy_tree          |"<<endl; 
		cout<<"|  5 = Exit                  |"<<endl; 
		cout<<"------------------------------"<<endl;
		cout<<"Ch : ";
		cin>>ch;
		if(ch == "1"){
			float value;
			cout<<"Insert : ";
			cin>>value;        
			BST.Insert(value);
		}else if(ch == "2"){
			float value;
			cout<<"search : ";
			cin>>value;        
			BST.Find(value);
			if (Result == NULL){
				cout << "No Information ->  "<<value<<endl;
			}else{
				cout << "Information    ->  "<<value<<endl;
                        }
		}else if(ch == "3"){

		}else if(ch == "4"){

		}
	}while(ch!="5");

	return 0;
}





