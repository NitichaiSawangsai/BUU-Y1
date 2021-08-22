#include <iostream>     //              Language  C++                 //
#include <string.h>     //             Input Letter                   //
#include <iomanip>
using namespace std;
class DynamicArray {
	private :
		int size ;
		int *data ;
	public  :
		DynamicArray(){
			size=0;
		}
		void  fillArray (){
			int d;
			for(int i=0;i<size;i++){
				cin>>d;
				data[i]=d;
			}
		}
		void inputArraySize (int s){
			size=s;
			data =  new int [s];
		}
		void average(){
			double sum=0.00;
			for(int i=0;i<size;i++){
				sum+=data[i];
			}
			cout<<fixed<<setprecision(2)<<sum/size <<endl; 
		}
		void  max(){
			int MAX=0;
			for(int i=0;i<size;i++){
				if(i==0){
					MAX=data[i];
				}
				else if(data[i]>MAX){
					MAX=data[i];
				}

			}
			cout<<MAX<<endl;

		}
		void min(){
			int MIN=0;
			for(int i=0;i<size;i++){
				if(i==0){
					MIN=data[i];
				}
				else if(data[i]<MIN){
					MIN=data[i];
				}
			}
			cout<<MIN<<endl;
		}
};

int main (){
	DynamicArray aa;
	int num;
	cin>>num;
	aa.inputArraySize(num);
	aa.fillArray();
	aa.average();
	aa.min();
	aa.max();

}//END
