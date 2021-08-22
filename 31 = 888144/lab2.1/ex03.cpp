using namespace std;
#include <iostream>
int main() {
        int i,j,num; 
        cout<<endl;
        cout<<"Enter the desired size : ";
        cin>>num;
        if(num<1){
		cout<<endl<<" ******** No size is too small Please enter a new number. ********* "<<endl;
        }//if num<1
        	cout<<"\t";
        	for(i=1;i<=num;i++) {
          		for(j=num-i;j>0;j--){
         	 		cout<<" ";
         	 	}//for j
          		for(j=1;j<i+1;j++)    {
                		cout<<"* ";
        		}//for j
          	cout<<endl;
        	cout<<"\t";
       		}//for i
        cout<<endl;
	return 0;
}//main
