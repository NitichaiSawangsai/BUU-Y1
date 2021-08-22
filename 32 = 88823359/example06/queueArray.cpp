#include <iostream>
using namespace std;
class QueueArray {
	private :
		int *arr_queue;
		int max;
		int count;
		int font;
		int back; 
	public  :
		QueueArray(int size){
			max=size;
			count=0;
			font=-1;
			back=0;
			arr_queue = new int[size];
		}
		void enqueue(int value){
			if(isFull()){
				cout<<" -- isEmpty -- "<<endl;
			}else{
				arr_queue[count]=value;
				count++;
			}
		}
		int dequeue(){
			int data = font;
			if(isEmpty()){
				cout<<" -- No data -- "<<endl;
				return 0;
			}else{
			    back++;
			    font++;
                            count--; 
			    return arr_queue[font];
			}
		}
		bool isEmpty(){
			if(count==0){
				return true;
			}else{
				return false;
			}
		}
		bool isFull(){
			if(count==max){
				return true;
			}else{
				return false;
			}
		} 
		void show( ){
            cout<<"Data : ";
            for(int i=back;i<count;i++){
            	cout<<arr_queue[i]<<" ";
			}       
			cout<<endl; 
	    }
		~QueueArray(){
			delete [] arr_queue;
		}
};
int main(){
        int size=0;
        cout<<"Size : ";
        cin>>size;
	QueueArray obj_queueArr(size);
        string  ch;
	do{
		cout<<"\n\n\n----------------------"<<endl;
		cout<<" 1 = enqueue          "<<endl;
		cout<<" 2 = dequeue          "<<endl;
		cout<<" 3 = Show             "<<endl;
		cout<<" 4 = isEmpty          "<<endl;
		cout<<" 5 = Exit             "<<endl;
		cout<<"----------------------"<<endl;
                cout<<"ch : ";
		cin>>ch;
                cout<<endl;
		if(ch=="1"){
			int add=0;
			cout<<"\n-->> Add : ";
			cin>>add;
			obj_queueArr.enqueue(add);
		}else if(ch=="2"){
			if(!obj_queueArr.isEmpty()){
				cout<<"\n dequeue : "<<obj_queueArr.dequeue()<<endl;
			}else{
				cout<<"\n ++ No isFull "<<endl;
			}
            
		}else if(ch=="3"){
			cout<<"\n-->> Show <<--"<<endl;
			obj_queueArr.show();
		}else if(ch=="4"){
			cout<<"\n-->> IsEmpty <<--"<<endl;
			if(obj_queueArr.isFull()){
				cout<<"\n  -- isFull   "<<endl;
			}else{
				cout<<"\n ++ No isFull "<<endl;
			}
		}
	}while(ch!="5");               
	return 0;
}

