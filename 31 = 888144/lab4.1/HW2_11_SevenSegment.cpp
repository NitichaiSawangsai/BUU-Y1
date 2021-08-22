/* 
TASK : LAB2_11 SevenSegment
LANG : C++
AUTHOR : NItichai Sawangsai
STUDENTID : 59160668
MAJOR : SE
 */
using namespace std;
#include <iostream>
#include <string.h>
#include <iomanip>
int main () {
	char ch[9][9];
	int i,j;
	for(i=0;i<6;i++){
		for(j=0;j<2;j++){
			cin>>ch[i][j];
		}
	}
	for(i=0;i<6;i++){
		for(j=0;j<2;j++){
			if(ch[0][j]=='o'&&ch[0][j]=='n'){
				cout<<"   -  "<<endl;
			}else{
				cout<<"      "<<endl;
			}if(ch[1][j]=='o'&&ch[1][j]=='n'){
				cout<<" |   ";
			}else{
				cout<<"     ";
			}if(ch[2][j]=='o'&&ch[2][j]=='n'){
				cout<<"|"<<endl;
			}else{
				cout<<" "<<endl;
			}if(ch[3][j]=='o'&&ch[3][j]=='n'){
				cout<<"   -  "<<endl;
			}else{
				cout<<"      "<<endl; 
			}if(ch[4][j]=='o'&&ch[4][j]=='n'){
				cout<<" |   ";
			}else{
				cout<<"     ";
			}if(ch[5][j]=='o'&&ch[5][j]=='n'){
				cout<<"|"<<endl;
			}else{
				cout<<" "<<endl;  
			}if(ch[6][j]=='o'&&ch[6][j]=='n'){
				cout<<"   -  "<<endl;
			}//END

	}
}

/*
   cin>>ch>>ch1>>ch2>>ch3>>ch4>>ch5>>ch6;
   if(ch[0]=='o'&&ch[1]=='n'){
   cout<<"   -  "<<endl;
   }else{
   cout<<"      "<<endl;
   }if(ch1[0]=='o'&&ch1[1]=='n'){
   cout<<" |   ";
   }else{
   cout<<"     ";
   }if(ch3[0]=='o'&&ch3[1]=='n'){
   cout<<"|"<<endl;
   }else{
   cout<<" "<<endl;
   }if(ch2[0]=='o'&&ch2[1]=='n'){
   cout<<"   -  "<<endl;
   }else{
   cout<<"      "<<endl; 
   }if(ch4[0]=='o'&&ch4[1]=='n'){
   cout<<" |   ";
   }else{
   cout<<"     ";
   }if(ch6[0]=='o'&&ch6[1]=='n'){
   cout<<"|"<<endl;
   }else{
   cout<<" "<<endl;  
   }if(ch5[0]=='o'&&ch5[1]=='n'){
   cout<<"   -  "<<endl;
   }//END
 */
return 0;
}//main
