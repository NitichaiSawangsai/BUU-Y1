#include <stdlib.h> 
#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>
#include <iomanip>
using namespace std;
class Student{
	private : 
		string  id;
		string year;
		string fname;
		string lname;
		float gpa;
		string branch;
		string generation;
	public  :
		Student (){
			id=" ";
			year=" ";
			fname=" ";
			lname=" ";
			gpa=0.00;
			branch=" ";
			generation=" ";
		}
		void setstudent(string i,string y,string f,string l,float gp,string b,string gen){
			id=i;
			year=y;
			fname=f;
			lname=l;
			gpa=gp;
			branch=b;
			generation=gen;
		}
		void setid(string id){
			this->id=id; 
		}
		string getid(){
			return id ;
		}
		void setyear(string year){
			this->year=year; 
		}
		string getyear(){
			return year ;
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
		void setgpa(float gpa){
			this->gpa=gpa;
		}
		float getgpa(){
			return gpa;
		}
		void setbranch(string branch){
			this->branch=branch;
		}
		string getbranch(){
			return branch;
		}
		void setgeneration(string generation){
			this->generation=generation;
		}
		string getgeneration(){
			return generation;
		}
};
class Database{
	private :
		Student *stu;
		int count;
	public  :
		Database(){
			//เอาไว้เก็บอาเรย์ใช้แค่โกง 
			count =99;
			stu = new Student[count];
		}
		~Database(){
			delete []stu;
		}

		void read(){
			ifstream myFile("student.dat",ios::in);
			string  id;
			string year;
			string fname;
			string lname;
			float gpa;
			string branch;
			string generation;
			count=0;
			while (myFile>>id>>year>>fname>>lname>>gpa>>branch>>generation){
				stu[count].setid(id);
				stu[count].setyear(year);
				stu[count].setFname(fname);
				stu[count].setLname(lname);
				stu[count].setgpa(gpa);
				stu[count].setbranch(branch);
				stu[count].setgeneration(generation);
				count++;
			}
			myFile.close();    
		}
		void add(string id,string year,string fname,string lname,float gpa,string branch,string generation){
			stu[count].setid(id);
			stu[count].setyear(year);
			stu[count].setFname(fname);
			stu[count].setLname(lname);
			stu[count].setgpa(gpa);
			stu[count].setbranch(branch);
			stu[count].setgeneration(generation);
			count++;
		}
		void print(){
			cout<<"                                         Show Student                       "<<endl;
			cout<<" ========================================================================================================"<<endl;
			cout<<"  Student Id.    year             First & Last Name                     GPA    Major      Generation     "<<endl;
			cout<<" ========================================================================================================"<<endl;
			for(int i=0;i<count;i++){
				cout<<"   "<<setw(15)<<left<<stu[i].getid();
				cout<<setw(15)<<left<<stu[i].getyear();
				cout<<setw(15)<<left<<stu[i].getFname();
				cout<<setw(15)<<left<<stu[i].getLname();
				cout<<setw(15)<<left;printf("\t\t%3.2f\t",stu[i].getgpa());
				cout<<setw(12)<<left<<stu[i].getbranch();
				cout<<setw(12)<<left<<stu[i].getgeneration()<<endl;
			}
		}
};
int main(){
	Database Data;
	int ch=0,i=0;
	Data.read();
	do{
		cout<<"\n\n\n\n\t------------------------"<<endl;
		cout<<"\t1. show Student List    "<<endl;
		cout<<"\t2. Exit                 "<<endl;
		cout<<"\t------------------------"<<endl;
		cin>>ch;
		if(ch==1){
			Data.print();
		}
	}while(ch!=2);      
	return 0;
}
