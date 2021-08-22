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

		cout << "Number of items in BST is " << BST.NumItems() << endl;

		if (BST.Empty())
		cout << "BST is empty (correct)" << endl;
		else
		cout << "BST is not empty (incorrect)" << endl;

		cout << "Inserting data" << endl;
		BST.Insert(4.5);
		BST.Insert(-3.33);
		BST.Insert(12.6);
		BST.Insert(44.33);
		BST.Insert(12.56);
		BST.Insert(12);

		cout << "Number of items in BST is " << BST.NumItems() << endl;

		if (BST.Empty())
		cout << "BST is empty (incorrect)" << endl;
		else
		cout << "BST is not empty (correct)" << endl;

		Result = BST.Find(12.6);
		if (Result == NULL)
		cout << "The 12.6 could not be found in BST (incorrect)." << endl;
		else
		cout << "The 12.6 was found in BST (correct)." << endl;

		Result = BST.Find(6.6);
		if (Result == NULL)
		cout << "The 6.6 could not be found in BST (correct)." << endl;
		else
		cout << "The 6.6 was found in BST (incorrect)." << endl;

		cout<<"NItichai -:> "<<BST.Find(12)<<endl;
	 	return 0;
}





