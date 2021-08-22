#include <iostream>
using namespace std;
class StackArray {
	private :
		int *arr_stack;
		int max;
		int top; 
	public  :
		StackArray(int size){
			max=size;
			arr_stack = new int[size];
			top=-1;
		}
		void push(int value){
			if(isFull()){
				cout<<" -- isEmpty -- "<<endl;
			}else{
				top++;
				arr_stack[top]=value;
			}
		}
		int pop(){
			if(isEmpty()){
				cout<<" -- No data -- "<<endl;
				return 0;
			}else{
				return arr_stack[top--];
			}
		}
		int size(){
			return top+1;
		}
		bool isEmpty(){
			if(top==-1){
				return true;
			}else{
				return false;
			}
		}
		bool isFull(){
			if(top==max){
				return true;
			}else{
				return false;
			}
		} 
		void show( ){
                        cout<<"Data : ";
			for(int i=top;i>=0;i--){
				cout<<arr_stack[i]<<" ";
			}
			cout<<endl;
		}
		~StackArray(){
			delete [] arr_stack;
		}
};
int main(){
        int size=0;
        cout<<"size : ";
        cin>>size;
	StackArray obj_stackArr(size);
        string  ch;
	do{
		cout<<"\n\n\n----------------------"<<endl;
		cout<<" 1 = push             "<<endl;
		cout<<" 2 = POP              "<<endl;
		cout<<" 3 = Show             "<<endl;
		cout<<" 4 = size             "<<endl;
		cout<<" 5 = isEmpty          "<<endl;
		cout<<" 6 = Exit             "<<endl;
		cout<<"----------------------"<<endl;
                cout<<"ch : ";
		cin>>ch;
                cout<<endl;
		if(ch=="1"){
			int add=0;
			cout<<"\n-->> Add : ";
			cin>>add;
			obj_stackArr.push(add);
		}else if(ch=="2"){
                        cout<<"\n POP : "<<obj_stackArr.pop()<<endl;
		}else if(ch=="3"){
			cout<<"\n-->> Show <<--"<<endl;
			 obj_stackArr.show();
		}else if(ch=="4"){
                        cout<<"\n Size : "<<obj_stackArr.size()<<endl;
		}else if(ch=="5"){
			cout<<"\n-->> IsEmpty <<--"<<endl;
			if(obj_stackArr.isFull()){
				cout<<"\n  -- isFull   "<<endl;
			}else{
				cout<<"\n ++ No isFull "<<endl;
			}
		}
	}while(ch!="6");               
	return 0;
}
