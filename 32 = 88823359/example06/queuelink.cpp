#include <iostream>
using namespace std;
class QueueLink {
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
		node *font;
		node *back;
		int count;
	public  :
		QueueLink(){ 
		    font = NULL; back = NULL;    
			this->count=0;
		}
		void enqueLink(int value){
			node *tmp=new node;
			tmp->setnode(value);
			if(isEmpty()){
				font=tmp;
				back=tmp;
			}else{
				back->link=tmp;
				back=tmp;
			}
			count++;
		}
		int dequeue(){
			node *tmp=font;
			int value = tmp->data; 
			if(isEmpty()){
				return  0;
			}else if(isEmpty()){
		        font = NULL;
		        back = NULL; 
			}else{
				font=font->link;
				count--; 
				return  value;
		    }
		}
		void show(){
			cout<<"Data : ";
			for(node* tmp=font;tmp!=NULL;tmp=tmp->link){
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
		~QueueLink(){
			for(node *tmp=font;tmp!=NULL;font=font->link){
				delete tmp;
				tmp = NULL;
			}
			font = NULL; back = NULL;
		}

};
int main(){
    QueueLink obj_queuelin;
        string  ch;
	do{
		cout<<"\n\n\n----------------------"<<endl;
		cout<<" 1 = enqueue          "<<endl;
		cout<<" 2 = dequeue          "<<endl;
		cout<<" 3 = Show             "<<endl;
		cout<<" 4 = Exit             "<<endl;
		cout<<"----------------------"<<endl;
        cout<<"ch : ";
		cin>>ch;
                cout<<endl;
		if(ch=="1"){
			int add=0;
			cout<<"\n-->> Add : ";
			cin>>add;
			obj_queuelin.enqueLink(add);
		}else if(ch=="2"){
			if(!obj_queuelin.isEmpty()){
            	cout<<"\n dequeue : "<<obj_queuelin.dequeue()<<endl;
            }else{
            	cout<<"No data"<<endl;
			}
		}else if(ch=="3"){
			cout<<"\n-->> Show <<--"<<endl;
			obj_queuelin.show();
		}
	}while(ch!="4");                    
	return 0;
}
