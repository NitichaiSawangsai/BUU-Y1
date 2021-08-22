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
				this->prefixName="Dr.";
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
		Student *stu ; 
		int Num_stu;
	public  :
		Database(){
                        Num_stu=1;
			stu = new Student[Num_stu+5];
		}
                ~Database(){
                     delete []stu;
                }
		void setDatabase(int Num){
			string  id;
			string prefixName;
			string fname;
			string lname;
			string NickName;
			int phone;
			float gpa;
			cout<<"\nID : ";
			cin>>id;
			do{
				cout<<" 1 = Mr.\n 2 = Mrs.\n 3 = Miss\n 4 = Ms.\n 5 = Dr.\n 6 = Other cases : ";
				cin>>prefixName;
				if(prefixName=="6"){
					cout<<"Other cases PrefixName : ";
					cin>>prefixName;
				}
			}while(prefixName<="0"||prefixName>"6");
			cout<<"FName : ";
			cin>>fname;
			cout<<"LName : ";
			cin>>lname;
			cout<<"NickName : ";
			cin>>NickName;
			cout<<"Telephone :";
			cin>>phone;
			do{
				cout<<"GPA :";
				cin>>gpa;
			}while(gpa<0.00||gpa>4.00);
			stu[Num].setid(id);
			stu[Num].setPrefixName(prefixName);
			stu[Num].setFname(fname);
			stu[Num].setLname(lname);
			stu[Num].setNickName(NickName);
			stu[Num].setTelephone(phone);
			stu[Num].setgpa(gpa);
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
					cout<<"No."<<i;
					cout<<" ID : "<<stu[i].getid();
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
					cout<<"No."<<i;
					cout<<" ID : "<<stu[i].getid();
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
					cout<<"No."<<i;
					cout<<" ID : "<<stu[i].getid();
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
					cout<<"No."<<i;
					cout<<" ID : "<<stu[i].getid();
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
					cout<<"No."<<i;
					cout<<" ID : "<<stu[i].getid();
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
					cout<<"No."<<i;
					cout<<" ID : "<<stu[i].getid();
					cout<<"  "<<stu[i].getPrefixName();
					cout<<" "<<stu[i].getFname();
					cout<<" "<<stu[i].getLname();
					cout<<" "<<stu[i].getNickName()<<endl;
					cout<<"Telephone : 0"<<stu[i].getTelephone();
					printf("\t GPA : %1.2f\n",stu[i].getgpa());
				}
			}
		}
		void Edit_student (int num,int No){
			string id,prefixName,fname,lname,NickName;
			int phone,gpa,chEdit;
			if(No<num){
				cout<<"\n Edit ID ? \n\t 1 = Edit\n\t 2 = Next : ";
				cin>>chEdit;
				if(chEdit==1){
					cout<<"\n Edit ID : ";
					cin>>id;
					stu[No].setid(id);
				}
				cout<<"\n Edit PrefixName ? \n\t 1 = Edit\n\t 2 = Next : ";
				cin>>chEdit;
				if(chEdit==1){
					do{
						cout<<" 1 = Mr.\n 2 = Mrs.\n 3 = Miss\n 4 = Ms.\n 5 = Dr.\n 6 = Other cases : ";
						cin>>prefixName;
					}while(prefixName<="0"||prefixName>"6");
					stu[No].setPrefixName(prefixName);
				}
				cout<<"\n Edit Fname? \n\t 1 = Edit\n\t 2 = Next : ";
				cin>>chEdit;
				if(chEdit==1){
					cout<<"\n Edit Fname : ";
					cin>>fname;
					stu[No].setFname(fname);
				}
				cout<<"\n\n Edit Lname? \n\t 1 = Edit\n\t 2 = Next : ";
				cin>>chEdit;
				if(chEdit==1){
					cout<<"\n Edit Lname : ";
					cin>>lname;
					stu[No].setLname(lname);
				}
				cout<<"\n\n Edit NickName? \n\t 1 = Edit\n\t 2 = Next : ";
				cin>>chEdit;
				if(chEdit==1){
					cout<<"\n Edit NickName : ";
					cin>>NickName;
					stu[No].setNickName(NickName);
				}
				cout<<"\n\n Edit Telephone? \n\t 1 = Edit\n\t 2 = Next : ";
				cin>>chEdit;
				if(chEdit==1){
					cout<<"\n Edit Telephone : ";
					cin>>phone;;
					stu[No].setTelephone(phone);
				}
				cout<<"\n\n Edit GPA? \n\t 1 = Edit\n\t 2 = Next : ";
				cin>>chEdit;
				if(chEdit==1){
					do{
						cout<<"GPA :";
						cout<<"\n Edit GPA : ";
						cin>>gpa;
					}while(gpa<0.00||gpa>4.00);
					stu[No].setgpa(gpa);

				}
			}else {
				cout<<"\n\t *** No in memory *** "<<endl;
			}
		}
		int  Delete_student_data (int num){
			int removeltem;        
			cout<<"\nRemoveltem No. ? ";
			cin>>removeltem;
			for(int j=removeltem;j<num;j++){
				stu[j].setid(stu[j+1].getid());
				stu[j].setPrefixName(stu[j+1].getPrefixName());
				stu[j].setFname(stu[j+1].getFname());
				stu[j].setLname(stu[j+1].getLname());
				stu[j].setNickName(stu[j+1].getNickName());
				stu[j].setTelephone(stu[j+1].getTelephone());
				stu[j].setgpa(stu[j+1].getgpa());
			}
			num--;
			return num;
		}
		void prind(int num){
			cout<<endl;
			for(int i=0;i<num;i++){
				cout<<"No."<<i;
				cout<<" ID : "<<stu[i].getid();
				cout<<"  "<<stu[i].getPrefixName();
				cout<<" "<<stu[i].getFname();
				cout<<" "<<stu[i].getLname();
				cout<<" "<<stu[i].getNickName()<<endl;
				cout<<"Telephone : 0"<<stu[i].getTelephone();
				printf("\t GPA : %1.2f\n\n",stu[i].getgpa());
			} 
		} 
};
int main(){
	int exitsearch=0,ch=0,num=0;
	Database aa;
	string  id;
	string prefixName;
	string fname;
	string lname;
	string Nickname;
	int phone;
	float gpa;
	system("clear");
	do{
		system("clear");
		cout<<"\n\t\t 1 = Add student information "<<endl;
		cout<<"\t\t 2 = Student Information Show "<<endl;
		cout<<"\t\t 3 = Search "<<endl;
		cout<<"\t\t 4 = Edit student information "<<endl;
		cout<<"\t\t 5 = Delete student data "<<endl;
		cout<<"\t\t 6 = Exit "<<endl;
		cin>>ch;

		if(ch==1){
			aa.setDatabase(num);
			num++;
		}else if(ch==2){
			aa.prind(num);
			if(num==0){
				cout<<" \t *** No data in the system *** \n";
			}
			cout<<"\n\t 1 = Exit "<<endl;
			cin>>ch;
		}else if (ch==3){
			do{
				system("clear");
				cout<<"\n\t\t 1 = SearchID \n"; 
				cout<<"\t\t 2 = SearchPrefixName \n"; 
				cout<<"\t\t 3 = SearchFname \n";
				cout<<"\t\t 4 = SearchLname \n"; 
				cout<<"\t\t 5 = SearchTelephone \n"; 
				cout<<"\t\t 6 = SearchGPA \n"; 
				cout<<"\t\t 7 = ExitSearch \n"; 
				cin>>exitsearch;

				if(exitsearch==1){
					cout<<"\n SearchID : ";
					cin>>id;
					aa.searchid(id);
					cout<<"\n\t 1 = Exit "<<endl;
					cin>>ch;
				}else if(exitsearch==2){
					do{
						cout<<"\n SearchPrefixName : \n";
						cout<<" 1 = Mr.\n 2 = Mrs.\n 3 = Miss\n 4 = Ms.\n 5 = Dr.\n 6 = Other cases : ";
						cin>>prefixName;
					}while(prefixName<="0"||prefixName>"6");
					if(prefixName == "1"){ 
						prefixName="Mr.";
					}else if(prefixName == "2"){
						prefixName="Mrs.";
					}else if(prefixName == "3"){
						prefixName="Miss.";
					}else if(prefixName == "4"){
						prefixName="Ms.";
					}else if(prefixName == "5"){
						prefixName="Ms.";
					}else if(prefixName == "6"){
						cout<<"\n SearchPrefixName : ";
						cin>>prefixName;
					}
					cout<<endl;
					aa.searchPrefixName(prefixName);
					cout<<"\n\t 1 = Exit "<<endl;
					cin>>ch;
				}else if(exitsearch==3){
					cout<<"\n SearchFname : ";
					cin>>fname;
					aa.searchFname(fname);
					cout<<"\n\t 1 = Exit "<<endl;
					cin>>ch;
				}else if(exitsearch==4){
					cout<<"\n SearchLname : ";
					cin>>lname;
					aa.searchLname(lname);
					cout<<"\n\t 1 = Exit "<<endl;
					cin>>ch;
				}else if(exitsearch==5){
					cout<<"\n SearchTelephone : ";
					cin>>phone;
					aa.searchTelephone(phone);
					cout<<"\n\t 1 = Exit "<<endl;
					cin>>ch;
				}else if(exitsearch==6){
					cout<<"\n SearchGPA : ";
					cin>>gpa;
					aa.searchgpa(gpa);
					cout<<"\n\t 1 = Exit "<<endl;
					cin>>ch;

				}else if(exitsearch==7){
					exitsearch=8;
				} 

			}while(exitsearch!=8);
		}else if (ch==4){
			int no=0;
			cout<<"NO. : ";
			cin>>no;
			aa.Edit_student(num,no);
			cout<<"\n\t 1 = Exit "<<endl;
			cin>>ch;
		}else if (ch==5){
			num=aa.Delete_student_data(num); 
		}

	}while(ch!=6);
	return 0;
}//main

