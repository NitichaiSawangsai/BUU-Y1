#include <iostream>
#include <stdbool.h>
#include <string.h>
using namespace std;
class StackLink{
	private:
		class node{
			public:
				char data;
				node *link;
				node(char data){
					this->data = data;
					link = NULL;
				}
		};
		node *top;
		int count;
	public:
		StackLink(){
			this->top = NULL;
			count = 0;
		}
		~StackLink(){
			for(node *tmp = top;top != NULL; top = top->link){
				delete tmp;
				tmp = NULL;
			}
		}
		void push(char value){
			node *newnode = new node(value);
				if(isEmpty()){
					top = newnode;
				}else{
					newnode->link = top;
					top = newnode;
				}
				count++;
		}
		char pop(){
				char value = top->data;
				if(count > 1){
					node *temp;
					temp = top;
					top = top->link;
					count--;
					delete temp;
				}else if(count == 1){
					top = NULL;
					count--;
				}
				return value;				
		}
		bool isEmpty(){
			if(count == 0){
				return true;
			}else{
				return false;
			}
		}
		bool check(char value){
			if(value == '+' || value == '-'){
				if(top->data == '*' || top->data == '/'){
					return false;
				}else{
					return true;
				}
			}else if(value == '*' || value == '/'){
				if(top->data == '+' || top->data == '-'){
					return true;
				}else{
					return false;
				}
			}
		}
};
int main(){
	int menu, nub;
	string postfix;
	char infix[50];
	StackLink stack;
	do{
		postfix = "";
		cout << "=======MENU======" << endl;
		cout << "= 1.Input Ifix  =" << endl;
		cout << "= 0.Exit        =" << endl;
		cout << "=================" << endl;
		cout << "Enter menu : ";
		cin >> menu;
		if(menu == 1){
			cout << "Input Infix : ";
			cin >> infix;
			nub = strlen(infix);
			for(int i = 0;i < nub; i++){
				if(infix[i] != '(' && infix[i] != ')' && infix[i] != '+' && infix[i] != '-' && 
				   infix[i] != '*' && infix[i] != '/'){
					postfix += infix[i];
				}else if(infix[i] == '('){
					postfix += infix[i+1];
					postfix += infix[i+3];
					postfix += infix[i+2];	
					i += 4;
				}else{
					if(stack.isEmpty()){
						stack.push(infix[i]);
					}else{
						if(stack.check(infix[i])){
							stack.push(infix[i]);
						}else{
							for(int j = 0;j < 50; j++){
								if(stack.isEmpty()){
									break;
								}else{
									postfix += stack.pop();
								}
							}
							stack.push(infix[i]);
						}
					}	
				}
			}
			for(int j = 0;j < 50; j++){
				if(stack.isEmpty()){
					break;
				}else{
					postfix += stack.pop();
				}
			}
			cout << "Postfix is : " << postfix << endl;
		}
	}while(menu != 0);	
	return 0;
}
