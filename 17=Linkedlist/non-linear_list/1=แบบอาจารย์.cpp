#include <iostream>
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
using namespace std;
class BinaryTree{
	private : 
		class node {
			public :
				int data;
				node *left;
				node *right;
				void setnode(int data)  {
					this->data=data;
					this->left=NULL;
					this->right=NULL;
				}            
		};
	public  :
		node *root;
		BinaryTree(){
			this->root = NULL;
		}
		void Insert(int value){
			node * newnode = new node;
			newnode->setnode(value);
			if(root == NULL){
				root = newnode;
			}else{
				node *temp=root;
				node *ptemp=root; 
				bool is_equal = false;
				int rol = 0;
				while (temp != NULL){
					ptemp = temp;
					if (value < temp->data){
						temp = temp->left;
						rol = 1;
					}else if(value > temp->data){
						temp = temp->right;
						rol = 0;
					}else{
						is_equal = true;
					}
				}
				if(!is_equal){
					if(rol == 1 ){
						ptemp->left = newnode;
					}else{
						ptemp->right = newnode;
					}
				}
			}
		}
		bool search(int value){
			node * leaf = this->root;
			while(leaf != NULL) {
				if(value == leaf->data){   
					return true; 
				}
				if(value < leaf->data){
					leaf = leaf->left;
				}else{
					leaf = leaf->right;
				}
			}
			return false;
		}
		void printInOrder(node *leaf){
			if (this->root == NULL){
                                cout<<"\n!!!! No Data !!!"<<endl;
			}else if(leaf == NULL){
				return; printInOrder(leaf->left); 
			}else{
				cout << leaf->data <<" "; 
				printInOrder(leaf->right);
			}
		}
		void printPostorder(node* leaf){
			if (this->root == NULL){
                                cout<<"\n!!!! No Data !!!"<<endl;
			}else if(leaf != NULL){
				printPostorder(leaf->left);
				printPostorder(leaf->right);
				cout << leaf->data << " ";
			}
		}
		void printPreOrder(node* leaf){
			if (this->root == NULL){
                                cout<<"\n!!!! No Data !!!"<<endl;
			}else if(leaf != NULL){
				cout << leaf->data << " ";
				printPreOrder(leaf->left);
				printPreOrder(leaf->right);
			}
		}
		void destroy_tree(node *leaf) {
			if(leaf!=NULL) { 
				destroy_tree(leaf->left); 
				destroy_tree(leaf->right);
				delete leaf;
                                this->root = NULL;
			}
		}
		~BinaryTree(){
			this->destroy_tree(this->root);
		}

};
int main(){
	BinaryTree *binarytree = new BinaryTree();
	char ch;
	do{
                cout<<endl<<endl;
		cout<<"\n------------------------------"<<endl;
		cout<<"|  1 = Insert                |"<<endl;
		cout<<"|  2 = search                |"<<endl; 
		cout<<"|  3 = printInOrder          |"<<endl; 
		cout<<"|  4 = printPostorder        |"<<endl; 
		cout<<"|  5 = printPreorder         |"<<endl; 
		cout<<"|  6 = destroy_tree          |"<<endl; 
		cout<<"|  7 = Exit                  |"<<endl; 
		cout<<"------------------------------"<<endl;
		cout<<"Ch : ";
		cin>>ch; 
                cout<<endl<<endl<<endl;
		if(ch == '1'){
			int value;
			cout<<"value : ";
			cin>>value;
			binarytree->Insert(value);
		}else if(ch == '2'){
			int value;
			cout<<"search : ";
			cin>>value;
			if(binarytree->search(value) == 1){
				cout<<"\n ++ Yes search ++ "<<value<<endl;
			}else{
				cout<<"\n -- NO search -- "<<value<<endl;
                        }
		}else if(ch == '3'){
			cout<<" -->  printInOrder  <--   "<<endl; 
			binarytree->printInOrder(binarytree->root);
		}else if(ch == '4'){
			cout<<" -->  printPostorder <--  "<<endl; 
			binarytree->printPostorder(binarytree->root);
		}else if(ch == '5'){
			cout<<" -->  printPreorder  <--  "<<endl; 
			binarytree->printPreOrder(binarytree->root);
		}else if(ch == '6'){
			cout<<"----> ALL Delete <--- "<<endl;
			binarytree->destroy_tree(binarytree->root);
		}
	}while(ch != '7');
	return 0;
}
