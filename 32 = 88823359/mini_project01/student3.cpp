#include <stdlib.h> 
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
class Student{
	private : 
		string  id;
		string prefixName;
		string fname;
		string lname;
		string NickName;
		int Telephone;
		float gpa;
	public  :
		Student (){
			id=" ";
			prefixName=" ";
			fname=" ";
			lname=" ";
			NickName=" ";
			Telephone=0; 
			gpa=0.00;
		}
		void setid(string id){
			this->id=id; 
		}
		string getid(){
			return id ;
		}
		void setPrefixName(string prefixName){
			if(prefixName == "1"){ 
				this->prefixName="Mr.";
			}else if(prefixName == "2"){
				this->prefixName="Mrs.";
			}else if(prefixName == "3"){
				this->prefixName="Miss.";
			}else if(prefixName == "4"){
				this->prefixName="Ms.";
			}else if(prefixName == "5"){
				this->prefixName="Ms.";
			}else if(prefixName == "6"){
				this->prefixName=prefixName;
			}
		}
		string getPrefixName(){
			return prefixName;
		}
		void setFname(string fname){
			this->fname=fname;
		}
		string getFname(){
			return fname;
		}
		void setLname(string lname){
			this->lname=lname;
		}
		string getLname(){
			return lname;
		}
		void setNickName(string NickName){
			this->NickName=NickName;
		}
		string getNickName(){
			return NickName;
		}
		void setTelephone(int Telephone){
			this->Telephone=Telephone;
		}
		int getTelephone(){
			return Telephone;
		}
		void setgpa(float gpa){
			this->gpa=gpa;
		}
		float getgpa(){
			return gpa;
		}
};
class Database {
	private : 
		Student *stu ; // = new  Database[10];
		int Num_stu;
	public  :
		Database(){
			stu = new Student[Num_stu+5];
		}
		void setDatabase(){
			string  id;
			string prefixName;
			string fname;
			string lname;
			string NickName;
			int phone;
			float gpa;
			cout<<"ID : ";
			cin>>id;
			do{
				cout<<" 1 = Mr.\n 2 = Mrs.\n 3 = Miss\n 4 = Ms.\n 5 = Dr.\n 6 = Other cases : ";
				cin>>prefixName;
			}while(prefixName<="0"||prefixName>"6");
			cout<<"FName : ";
			cin>>fname;
			cout<<"LName : ";
			cin>>lname;
			cout<<"NickName : ";
			cin>>NickName;
			cout<<"Telephone :";
			cin>>phone;
			cout<<"GPA :";
			cin>>gpa;
			stu[Num_stu].setid(id);
			stu[Num_stu].setPrefixName(prefixName);
			stu[Num_stu].setFname(fname);
			stu[Num_stu].setLname(lname);
			stu[Num_stu].setPrefixName(prefixName);
			stu[Num_stu].setNickName(NickName);
			stu[Num_stu].setTelephone(phone);
			stu[Num_stu].setgpa(gpa);
			Num_stu++;

		}
		void searchid(string id){
			int num=0;
			for(int i=0;i<Num_stu;i++){
				if(id==stu[i].getid()){
					num++;
				}
			}
			cout<<"\n The total number : "<<num<<endl;
			for(int i=0;i<Num_stu;i++){
				if(id==stu[i].getid()){
					cout<<"\nID : "<<stu[i].getid();
					cout<<"  "<<stu[i].getPrefixName();
					cout<<" "<<stu[i].getFname();
					cout<<" "<<stu[i].getLname();
					cout<<" "<<stu[i].getNickName()<<endl;
					cout<<"Telephone : 0"<<stu[i].getTelephone();
					printf("\t GPA : %1.2f\n",stu[i].getgpa());
				}
			}
		}
		void searchPrefixName (string PrefixName){
			int num=0;
			for(int i=0;i<Num_stu;i++){
				if(PrefixName==stu[i].getPrefixName()){
					num++;
				}
			}
			cout<<"\n The total number : "<<num<<endl;
			for(int i=0;i<Num_stu;i++){
				if(PrefixName==stu[i].getPrefixName()){
					cout<<"\nID : "<<stu[i].getid();
					cout<<"  "<<stu[i].getPrefixName();
					cout<<" "<<stu[i].getFname();
					cout<<" "<<stu[i].getLname();
					cout<<" "<<stu[i].getNickName()<<endl;
					cout<<"Telephone : 0"<<stu[i].getTelephone();
					printf("\t GPA : %1.2f\n",stu[i].getgpa());
				}
			}
		}
		void searchFname(string Fname){
			int num=0;
			for(int i=0;i<Num_stu;i++){
				if(Fname==stu[i].getFname()){
					num++;
				}
			}
			cout<<"\n The total number : "<<num<<endl;
			for(int i=0;i<Num_stu;i++){
				if(Fname==stu[i].getFname()){
					cout<<"\nID : "<<stu[i].getid();
					cout<<"  "<<stu[i].getPrefixName();
					cout<<" "<<stu[i].getFname();
					cout<<" "<<stu[i].getLname();
					cout<<" "<<stu[i].getNickName()<<endl;
					cout<<"Telephone : 0"<<stu[i].getTelephone();
					printf("\t GPA : %1.2f\n",stu[i].getgpa());
				}
			}

		}
		void searchLname (string Lname){
			int num=0;
			for(int i=0;i<Num_stu;i++){
				if(Lname==stu[i].getLname()){
					num++;
				}
			}
			cout<<"\n The total number : "<<num<<endl;
			for(int i=0;i<Num_stu;i++){
				if(Lname==stu[i].getLname()){
					cout<<"\nID : "<<stu[i].getid();
					cout<<"  "<<stu[i].getPrefixName();
					cout<<" "<<stu[i].getFname();
					cout<<" "<<stu[i].getLname();
					cout<<" "<<stu[i].getNickName()<<endl;
					cout<<"Telephone : 0"<<stu[i].getTelephone();
					printf("\t GPA : %1.2f\n",stu[i].getgpa());
				}

			}
		}
		void searchNickName (string NickName){
			int num=0;
			for(int i=0;i<Num_stu;i++){
				if(NickName==stu[i].getNickName()){
					num++;
				}
			}
			cout<<"\n The total number : "<<num<<endl;
			for(int i=0;i<Num_stu;i++){
				if(NickName==stu[i].getNickName()){
					cout<<"\nID : "<<stu[i].getid();
					cout<<"  "<<stu[i].getPrefixName();
					cout<<" "<<stu[i].getFname();
					cout<<" "<<stu[i].getLname();
					cout<<" "<<stu[i].getNickName()<<endl;
					cout<<"Telephone : 0"<<stu[i].getTelephone();
					printf("\t GPA : %1.2f\n",stu[i].getgpa());
				}
			}

		}
		void searchTelephone (int Telephone){
			int num=0;
			for(int i=0;i<Num_stu;i++){
				if(Telephone==stu[i].getTelephone()){
					num++;
				}
			}
			cout<<"\n The total number : "<<num<<endl;
			for(int i=0;i<Num_stu;i++){
				if(Telephone==stu[i].getTelephone()){
					cout<<"\nID : "<<stu[i].getid();
					cout<<"  "<<stu[i].getPrefixName();
					cout<<" "<<stu[i].getFname();
					cout<<" "<<stu[i].getLname();
					cout<<" "<<stu[i].getNickName()<<endl;
					cout<<"Telephone : 0"<<stu[i].getTelephone();
					printf("\t GPA : %1.2f\n",stu[i].getgpa());
				}
			}
		}
		void searchgpa (float gpa){
			int num=0;
			for(int i=0;i<Num_stu;i++){
				if(gpa==stu[i].getgpa()){
					num++;
				}
			}
			cout<<"\n The total number : "<<num<<endl;
			for(int i=0;i<Num_stu;i++){
				if(gpa==stu[i].getgpa()){
					cout<<"\nID : "<<stu[i].getid();
					cout<<"  "<<stu[i].getPrefixName();
					cout<<" "<<stu[i].getFname();
					cout<<" "<<stu[i].getLname();
					cout<<" "<<stu[i].getNickName()<<endl;
					cout<<"Telephone : 0"<<stu[i].getTelephone();
					printf("\t GPA : %1.2f\n",stu[i].getgpa());
				}
			}

		}
		void prind(int num){
			for(int i=0;i<num;i++){
				cout<<"\nID : "<<stu[i].getid();
				cout<<"  "<<stu[i].getPrefixName();
				cout<<" "<<stu[i].getFname();
				cout<<" "<<stu[i].getLname();
				cout<<" "<<stu[i].getNickName()<<endl;
				cout<<"Telephone : 0"<<stu[i].getTelephone();
				printf("\t GPA : %1.2f\n",stu[i].getgpa());
			} 
		} 
};
int main(){
	int exit=0,exitprint=0,exitsearch=0,ch=0,num=0;
	Database aa;
	string  id;
	string prefixName;
	string fname;
	string lname;
	string NickName;
	int phone;
	float gpa;

	do{
		system("clear");
		cout<<"\n\t\t 1 = Add student information "<<endl;
		cout<<"\t\t 2 = Student Information Show "<<endl;
		cout<<"\t\t 3 = Search "<<endl;
		cout<<"\t\t 4 = Exit "<<endl;
		cin>>ch;

		if(ch==1){
			aa.setDatabase();
                        num++;
		}else if(ch==2){
			aa.prind(num);
		cout<<"\n\t\t 1 = Add student information "<<endl;
		cout<<"\t\t 2 = Student Information Show "<<endl;
		cout<<"\t\t 3 = Search "<<endl;
		cout<<"\t\t 4 = Exit "<<endl;
		cin>>ch;
		}else if (ch==3){
			do{
				system("clear");
				cout<<"\n\t\t 1 = SearchID \n"; 
				cout<<"\t\t 2 = SearchPrefixName \n"; 
				cout<<"\t\t 3 = SearchFname \n";
				cout<<"\t\t 4 = SearchLname \n"; 
				cout<<"\t\t 5 = SearchNickName \n";
				cout<<"\t\t 6 = SearchTelephone \n"; 
				cout<<"\t\t 7 = SearchGPA \n"; 
				cout<<"\t\t 8 = ExitSearch \n"; 
				cin>>exitsearch;

				if(exitsearch==1){
					cout<<"\n SearchID : ";
					cin>>id;
					aa.searchid(id);
				}else if(exitsearch==2){
					cout<<"\n SearchPrefixName : ";
					cin>>prefixName;
					aa.searchPrefixName(prefixName);
				} 

			}while(exitsearch!=1);
		}else if(ch==4){
                       exit=1;
                }

	}while(exit!=1);
	return 0;
}//main

