using namespace std;
#include <iostream>
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
				for(int i=(capacity-1);i>index;i--){
					arry[i]=arry[i-1];
				}
			}
			arry[index]=value;
			count++;
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
			for(int i=0;i<count;i++){
				cout<<"Arry["<<i<<"] = "<<arry[i]<<endl;
			}
		}
};
int main(){
	ArrayList Array(10);
	Array.add(2);
	Array.add(6);
	Array.add(7);
	Array.add(9);
	Array.add(3,4);
	Array.remove(0);
	Array.add(0);
	Array.add(2);
	Array.add(5);
	Array.add(8);
	Array.remove(5);
	Array.show();

	cout<<"\n\nmax_size --> "<<Array.max_size()<<"\nsize -->"<<Array.size()<<endl;
	if(Array.indexOf(0)==-1){
		cout<<"\nNo date."<<endl;
	}else{
		cout<<"\nserch = 0 --> Arry["<<Array.indexOf(0)<<"] "<<endl;
	}

	return 0;
}
