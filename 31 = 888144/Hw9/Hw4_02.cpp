#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
	int num; 
	cin>>num;
	for(int i=1;i<=num;i++){
		if((i%3)==0){
			cout<<"*"<<" ";
		}else{
			cout<<i<<" ";
		}
	}
        cout<<endl;
	return 0;
}//main

