#include <stdlib.h> 
#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>
#include <iomanip>
#include <unistd.h>   
#include <termios.h>
using namespace std;
int main(){
	int oo=0;
	while(100){
		string readinput,CH1[7],CH2[7];
		int i=0;
		int count1=0,count2=0;
		ifstream myFile1("aom.txt",ios::in);
		while(myFile1>>CH1[0]>>CH1[1]>>CH1[2]>>CH1[2]>>CH1[4]){}
		myFile1.close();

		ifstream myFile2("aom1.txt",ios::in);
		while(myFile2>>CH2[0]>>CH2[1]>>CH2[2]>>CH2[3]>>CH2[4]){}
		myFile2.close();

		system("clear");
		for(i=0;i<7;i++){ 
			cout<<"\t Atipong : "<<CH2[i]<<endl;
			cout<<"\t\t\t\t     my : "<<CH1[i]<<endl;
		}
		sleep(1);  
		oo++; 
		cout<<"\n yy= "<<oo<<endl;
	}
}//main
