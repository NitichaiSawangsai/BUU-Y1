/* 
TASK : LAB2_11 
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
#include <string.h>
int main () {
	char ch1[2],ch2[2],ch3[2],ch4[2],ch5[2],ch6[2],ch7[2];
	int i,j;
        cin>>ch1>>ch2>>ch3>>ch4>>ch5>>ch6>>ch7;
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
		        if(ch1[0]=='o'&&ch1[1]=='n'&&i==0&&j==1){
				cout<<"_";
 			}else if(ch2[0]=='o'&&ch2[1]=='n'&&i==1&&j==0){
				cout<<"|";
 			}else if(ch3[0]=='o'&&ch3[1]=='n'&&i==1&&j==1){
				cout<<"_";
 			}else if(ch4[0]=='o'&&ch4[1]=='n'&&i==1&&j==2){
				cout<<"|";
 			}else if(i==2&&j==0&&ch5[0]=='o'&&ch5[1]=='n'){
				cout<<"|";
 			}else if(i==2&&j==1&&ch6[0]=='o'&&ch6[1]=='n'){
				cout<<"_";
 			}else if(i==2&&j==2&&ch7[0]=='o'&&ch7[1]=='n'){
				cout<<"|";
 			}else if(i==0&&j==1){
				cout<<" ";
 			}else if(i==0&&j==0){
                            cout<<" ";
                        }else if(i==0&&j==2){
				cout<<" ";
			}else{cout<<" ";}
                   
		}
		cout<<endl;
	}

	return 0;
}//main
