#include <iostream>

#include "stdio.h"
#include "stdlib.h"
#include "time.h"
using namespace std;
class SortingArray {
	private :
		int *arr_sorting;
		int max;
	public  :
		SortingArray(int size){
			max         = size;
			arr_sorting = new int[size];
		}
		void  Input(int i){
			if(i==0){
				for(int i=0;i<max;i++){
					cout<<"Input["<<i<<"] : ";
					cin>>arr_sorting[i];
				}
			}else if(i==1){
				for(int i=0;i<max;i++){
					if(i%2==0){
						arr_sorting[i] = 50+(rand()%(10-50));
					}else if(i%3==0){
						arr_sorting[i] = rand() % 10; 
					}else{
						arr_sorting[i] = rand() % 60; 
					}
				}
			}
		}
		void Insertion_Sort(){
			int temp;
			for(int i=0;i<max;i++){
				for(int j=0;j<i;j++){
					if(arr_sorting[i]<arr_sorting[j]){
						temp           = arr_sorting[i];
						arr_sorting[i] = arr_sorting[j];
						arr_sorting[j] = temp;
					}
				} 
			} 
			/*int temp,j=0;
			  for(int i=0;i<max-1;i++){
			  temp             = arr_sorting[i];
			  for(int j=i-1;j>0;j--){
			  if(temp < arr_sorting[j]){
			  arr_sorting[j+1] = arr_sorting[j];
			  arr_sorting[j] = temp;
			  }
			  }    
			  }
			 */
		}
		void Selection_Sort(){
			int min=0,temp=0;
			for(int i=0;i<max-2;i++){
				min = i;
				for(int j=i+1;j<max-1;j++){
					if(arr_sorting[j]<arr_sorting[min]){
						min = j;
					}

				}
				temp = arr_sorting[i];
				arr_sorting[i]   = arr_sorting[min];
				arr_sorting[min] = temp;
			}
		} 
		void Bubble_Sort(){
			int temp;
			for(int i=0;i<max-1;i++){   
				for(int j=max-1;j>i;j--){
					if(arr_sorting[j] < arr_sorting[j-1]){
						temp             = arr_sorting[j];
						arr_sorting[j]   = arr_sorting[j-1];
						arr_sorting[j-1] = temp;
					}    
				}
			}
		}
		void show( ){
			cout<<"\nData : ";
			for(int i=0;i<max;i++){
				cout<<arr_sorting[i]<<" ";
			}
			cout<<endl;
		}
		~SortingArray(){
			delete [] arr_sorting;
		}
};
int main(){
	int ch    = 0;
	int input = 0;
	int size  = 0;
	cout<<"\n\nSize : ";
	cin>>size;
	SortingArray  Sorting(size);

	do{
		cout<<"\n-----------------------"<<endl;
		cout<<"  1. Input SortingArray  "<<endl;
		cout<<"  2. Random numbers      "<<endl;
		cout<<"  3. Insertion Sort      "<<endl;
		cout<<"  4. Selection Sort      "<<endl;
		cout<<"  5. Bubble Sort         "<<endl;
		cout<<"  6. Show                "<<endl;
		cout<<"  7. Exit                "<<endl;
		cout<<"------------------------"<<endl;
		cout<<"Input : ";
		cin>>ch;
		cout<<endl;
		if(ch==1){
			cout<<"\n --- Input SortingArray ---"<<endl;
			Sorting.Input(0);
		}else if(ch==2){
			cout<<"\n --- Random numbers ---"<<endl;
			Sorting.Input(1);
		}else if(ch==3){
			cout<<"\n --- Insertion Sort  ---"<<endl;
			Sorting.Insertion_Sort();
		}else if(ch==4){
			cout<<"\n --- Selection Sort ---"<<endl;
			Sorting.Selection_Sort();
		}else if(ch==5){
			cout<<"\n --- Bubble Sort ---"<<endl;
			Sorting.Bubble_Sort();
		}else if(ch==6){
			cout<<"\n --- Show SortingArray ---"<<endl;
			Sorting.show();
		}

	}while(ch!=7);
	return 0;
}//END 
