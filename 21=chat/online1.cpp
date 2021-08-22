#include <stdlib.h> 
#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>
#include <iomanip>
using namespace std;
int main(){
	string ch;
	string CH1,CH2;
	do{
		system("clear");
		ifstream myFile1("aom.txt",ios::in);
		while(myFile1>>CH1){}
		myFile1.close();

		ifstream myFile2("aom1.txt",ios::in);
		while(myFile2>>CH2){}
		myFile2.close();

		cout<<"\tNitichai : "<<CH1<<endl;
		cout<<"\t\t\t\t      my : "<<CH2<<endl;
		cout<<"\nINPUT : ";
		cin>>ch;
           //     getline (cin,ch);               

		ofstream MyFile("aom1.txt",ios::app);
		MyFile <<ch<<" ";

		MyFile.close();

	}while(ch!="0");
}
