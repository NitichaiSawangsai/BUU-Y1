using namespace std;
#include <iostream>
int main() {
 int i,j,a,num,row;
   cout<<"In put : ";
   cin>>num; 
      cout<<endl;
        for(row=num-1;row>=1;row--)    {
         for(i=1;i<=num-row;i++){
           cout<<" ";
         }//for i
         for(j=1;j<=2*row-1;j++)  {
           if(j<row){
                 cout<<"*";
           }//if j<row
         }//for j 
        cout<<endl;
  }
       cout<<endl;
	return 0;
}//main

