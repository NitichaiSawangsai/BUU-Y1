using namespace std;
#include <iostream>
int main() {
        int i,j,num; 
        cout<<endl;
        cout<<"Enter the desired size : ";
        cin>>num;
        for(i=1;i<=num;i++) {
          for(j=(num-i);j>=1;j--){
          	cout<<"  ";
          }//for j
          for(j=1;j<=i;j++)    {
                cout<<"*";
          }//for j
          cout<<endl;
        }//for i
        cout<<endl;
	return 0;
}//main
