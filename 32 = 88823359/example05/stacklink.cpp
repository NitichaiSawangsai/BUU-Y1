#include <iostream>
using namespace std;
class StackLink {
	private : 
		class node {
			public  :
				int data;
				node *link;
				void setnode(int value){
					this->data=value;
					link=NULL;
				}
		};
		node *top;
		int count;
	public  :
		StackLink(){
			this->top=NULL;     
			this->count=0;
		}
		void push(int value){
			node *tmp=new node;
			tmp->setnode(value);
			if(this->isEmpty()){
				top = tmp;
			}else{
				tmp->link = top;
				top       = tmp;
			}

			count++;
		}
		int pop(){
			node *tmp=top;
			int value = tmp->data; 
			if(isEmpty()){
				return  0;
			}else{
				top=top->link;
				count--; 
				return  value;
			}
		}
		void show(){
			cout<<"Data : ";
			for(node *tmp=top;tmp!=NULL;tmp=tmp->link){
				cout<<tmp->data<<" ";
			}
			cout<<endl;
		}
		bool isEmpty(){
			if(count==0){
				return true;
			}else{
				return false;
			}
		}
		int size(){
			return count;
		}
		~StackLink(){
			for(node *tmp=top;tmp!=NULL;top=top->link){
				delete  tmp;
				tmp = NULL;
			}
			top = NULL;
		}

};
int main(){
	StackLink obj_stackLink;
	string  ch;
	do{
		cout<<"\n----------------------"<<endl;
		cout<<" 1 = Add (push)       "<<endl;
		cout<<" 2 = Show             "<<endl;
		cout<<" 3 = pop              "<<endl;
		cout<<" 4 = size             "<<endl;
		cout<<" 5 = Exit             "<<endl;
		cout<<"----------------------"<<endl;
		cin>>ch;
		if(ch=="1"){
			int add=0;
			cout<<"\n-->> Add : ";
			cin>>add;
			obj_stackLink.push(add);
		}else if(ch=="2"){
			cout<<"\n-->> Show "<<endl;
			obj_stackLink.show();
		}else if(ch=="3"){
			if(obj_stackLink.size()==0){
				cout<<"No data"<<endl;
			}else{
				cout<<"POP : "<<obj_stackLink.pop()<<endl;
			}
		}else if(ch=="4"){
			cout<<"\n-->> Size = "<<obj_stackLink.size()<<endl;
		}
	}while(ch!="5");      
	return 0;
}
