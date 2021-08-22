#include <iostream>
//#include <stdbool.h>
using namespace std;
class ArrayList {
	private : 
		int capacity;
		int count;
		int *item;
		int *arry;
	public  :
		ArrayList(int size){
			arry = new int[(size*2)];
			capacity=size;
			count=0;
			item= NULL;
			for(int i=capacity;i<(capacity*2);i++){
				arry[i]=0; 
			}
		}
		~ArrayList(){
			delete [] arry;
		}
		void add( int value  ){
			if(isFull()){
				cout<<"Full Arry"<<endl;
			}else{
				arry[count]=value;
				count++;
			}
		}
		void add( int index , int value  ){
			if(isFull()){
				cout<<"Full Arry"<<endl;
			}else{
				for(int i=capacity;i>index;i--){
					arry[i]=arry[i-1];
				}
				arry[index]=value;
				count++;
			}
		}
		int get( int index ) {
			return arry[index];
		}
		void set( int index , int value ){
			arry[index]=value;
		}
		int indexOf( int value ){
			int u=-1,a=0;
			for(int i=0;i<count;i++){
				if(arry[i]==value){
					item=&arry[i];
					u=i;
				}
			}
			if(u==-1){
				return -1;
			}else{
				return u;
			}
		}
		int remove(int index){
			if(index>count){
				cout<<"\nNot index remove"<<endl;
			}else{ 
				for(int i=index;i<capacity;i++){
					arry[i]=arry[i+1];
				}
				count--;
			}
		}
		int size(){
			return count; 
		}
		int max_size( ){
			return capacity;
		}
		bool isEmpty( ) {
			if(count==0){
				return 1;
			}else{
				return 0;
			}
		}
		bool isFull( ){
			if(capacity==count){
				return 1;
			}else{
				return 0;
			}
		}
		void show( ){
		        cout<<"Arry : ";
			for(int i=0;i<count;i++){
                              cout<<arry[i]<<" ";
			}
		}
};
int main(){
        int size=0;
        cout<<"Size : ";
        cin>>size;
	ArrayList Array(size);
	string  ch;
	do{
		cout<<"\n\n\n----------------------"<<endl;
		cout<<" 1 = Add              "<<endl;
		cout<<" 2 = Add (index)      "<<endl;
		cout<<" 3 = Show             "<<endl;
		cout<<" 4 = Remove           "<<endl;
		cout<<" 5 = isEmpty          "<<endl;
		cout<<" 6 = Size             "<<endl;
		cout<<" 7 = Exit             "<<endl;
		cout<<"----------------------"<<endl;
		cin>>ch;
		if(ch=="1"){
			int add=0;
			cout<<"\n-->> Add "<<endl;
			cout<<"-->> Add : ";
			cin>>add;
			Array.add(add);
		}else if(ch=="2"){
			int add=0,index=0;
			cout<<"\n-->> Add (Index)"<<endl;
			cout<<"index : ";
			cin>>index;
			cout<<"Add : ";
			cin>>add;
			Array.add(index,add);
		}else if(ch=="3"){
			cout<<"\n-->> Show "<<endl;
			Array.show();
		}else if(ch=="4"){
			int remove=0;
			cout<<"\n-->> Remove : ";
			cin>>remove;
			Array.remove(remove);
		}else if(ch=="5"){
			cout<<"\n-->> isEmpty "<<endl;
			if(Array.isFull()){
				cout<<"\n  -- isFull   "<<endl;
			}else{
				cout<<"\n ++ No isFull "<<endl;
			}
		}else if(ch=="6"){
			cout<<"\n-->> Size = "<<Array.size()<<endl;
		}
	}while(ch!="7");      
	return 0;
}
