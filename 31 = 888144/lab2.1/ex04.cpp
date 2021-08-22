using namespace std;
#include <iostream>
int main() {
 int i,j,a,num;
   cout<<"In put : "<<endl;
   cin>>num; 
      cout<<endl;
        for(i=1;i<=num;i++)    {
         for(j=num;j>=i;j--)  {
            if(j>i) {    
              cout<<" ";
             } 
             else {
               for(a=1;a<=j;a++) {
                   cout<<"*";
                 }
              }
     }
        cout<<endl;
  }
       cout<<endl;
	return 0;
}//main

