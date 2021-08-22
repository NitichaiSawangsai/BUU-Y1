#include <stdlib.h> 
#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>
#include <iomanip>
using namespace std;
int main(){
	string ch,tt;
	string CH1,CH2;
	string line;
	do{ 
		system("clear");
		cout<<"-------------------------------"<<endl;
		cout<<"|     0 = Exit                |"<<endl;
		cout<<"|     1 = chat                |"<<endl;
		cout<<"|     2 = Show code || Image  |"<<endl;
		cout<<"-------------------------------"<<endl;
		cin>>tt;
		if(tt=="1"){
			do{
				system("clear");
				cout<<"\t\t (Save code || Image =1) \n\n\n"<<endl;

				ifstream myFile1("aom.txt",ios::in);
				while(myFile1>>CH1){}
				myFile1.close();

				ifstream myFile2("aom1.txt",ios::in);
				while(myFile2>>CH2){}
				myFile2.close();

				cout<<"\t Atipong : "<<CH2<<endl;
				cout<<"\t\t\t\t     my : "<<CH1<<endl;

				cout<<"\nINPUT : ";
				getline (std::cin,ch);

				ofstream MyFile("aom.txt",ios::app);
				MyFile<<ch<<endl;
				MyFile.close();

			}while(ch!="0");
		}
		if(tt=="2"){
			string line;
			ifstream myFile("aom.txt", ios::app);
			if(myFile.is_open()){
				while( getline(myFile, line) ) {
					cout << line << endl;
				}
			}

			cout<<"\n\n-------------------------------"<<endl;
			cout<<"|     0 = Exit                |"<<endl;
			cout<<"|     1 = chat                |"<<endl;
			cout<<"|     2 = Show code || Image  |"<<endl;
			cout<<"-------------------------------"<<endl;
			cin>>tt;
		}
	}while(tt!="0");
}//main
