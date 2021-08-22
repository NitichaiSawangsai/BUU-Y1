#include <stdlib.h> 
#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>
#include <iomanip>
using namespace std;
int main(){
	string ch,r;
	string CH1,CH2;
	do{
		system("clear");
		ifstream myFile1("aom.txt",ios::in);
		while(myFile1>>r){  
			CH1=r;
		}
		myFile1.close();
		ifstream myFile2("aom1.txt",ios::in);
		while(myFile2>>r){
			CH2=r;
		}
		myFile2.close();
			cout<<"\t Atipong : "<<CH2<<endl;
			cout<<"\t\t\t\t     my : "<<CH1<<endl;

		cout<<"\nINPUT : ";
		cin>>ch;

		ofstream MyFile("aom.txt",ios::app);
		MyFile <<ch<<" ";

		MyFile.close();

	}while(ch!="0");
}
