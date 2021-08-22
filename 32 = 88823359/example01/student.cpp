#include <iostream>
#include <string>
using namespace std;
class Student {
	private : 
		string  id;
		string prefixName;
		string fname;
		string lname;
		string NickName;
	public  :
		Student (){
			id=" ";
			prefixName=" ";
			fname=" ";
			lname=" ";
			NickName=" "; 
		}
		void setid(string id){
			this->id=id; 
		}
		string getid(){
			return id ;
		}
		void setPrefixName(string prefixName){
			this->prefixName=prefixName;
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
};
int main(){
		string  id;
		string prefixName;
		string fname;
		string lname;
		string NickName;
    Student *stu  = new  Student[10];
     for(int i=0;i<10;i++){
           cout<<"ID :";
           cin>>id;
           cout<<"Prefix :";
           cin>>prefixName;
           cout<<"Name :";
           cin>>fname;
           cout<<"Last :";
           cin>>lname;
           cout<<"NickName :";
           cin>>NickName;
           stu[i].setid(id);
           stu[i].setPrefixName(prefixName);
           stu[i].setFname(fname);
           stu[i].setLname(lname);
           stu[i].setPrefixName(prefixName);
           stu[i].setNickName(NickName);
      } 
      for(int i=0;i<10;i++){
           cout<<"ID : "<<stu[i].getid();
           cout<<"  "<<stu[i].getPrefixName();
           cout<<" "<<stu[i].getFname();
           cout<<" "<<stu[i].getLname();
           cout<<" "<<stu[i].getNickName()<<endl;
      } 

	return 0;
}//main

