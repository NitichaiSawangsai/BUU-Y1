#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Person {
	protected :
	private :
		string fName,lName;
	public    :
		Person ();
		Person (string f,string l);
		void setfName(string f);
		string getfName ();
		void setlName(string l);
		string getlName ();
		void printPerson();
};
		Person::Person (){
			fName=" ";lName=" ";
		}
		Person::Person (string f,string l){
			fName=f; lName=l;   
		}
		void Person::setfName(string f){
			fName=f;
		}
		string Person::getfName (){
			return fName;	       
		}
		void Person::setlName(string l){
			lName=l;
		}
		string Person::getlName (){
			return  lName ;  
		}
		void Person::printPerson(){
			cout<<"Name : "<<fName<<"  "<<lName<<endl;
		}

class Student : public Person {
	protected :
	private   :
		string Id;
	public    :
               Student();
               Student(string f,string l,string id);
               void setId(string id);
               string getId();
               bool checkEqual(string Idd);
               void printStudent();
};
                Student::Student(){
                 Id=" ";
               }
                Student::Student(string f,string l,string id){
                  setfName(f);
                  setlName(l);  
                  Id=id;
               }
               void  Student::setId(string id){
                  Id=id;  
               }
               string  Student::getId(){
                  return Id;
               }
               bool  Student::checkEqual(string Idd){
                   if(Id==Idd){
                    return true;
                   }else{
                    return false;
                   }
               }
               void  Student::printStudent(){
                    cout<<"ID : "<<Id<<endl;
                    printPerson();
               }
class UnderGraduate : public Student {
	protected :
	private   :
                  int level; 
	public    :
                  UnderGraduate();
                  UnderGraduate(int LEVEL,string f,string l,string id);
                  void printUnderGraduate();
};
                   UnderGraduate::UnderGraduate(){
                     level=0;
                  }
                   UnderGraduate::UnderGraduate(int LEVEL,string f,string l,string id) : Student(f,l,id) {
                    if(LEVEL>0&&LEVEL<5){
                     level=LEVEL;
                    }
                  }
                  void  UnderGraduate::printUnderGraduate(){
                    cout<<"--------------------------"<<endl;
                    cout<<"Level : "<<level<<endl; 
                    printStudent();
                    cout<<"--------------------------"<<endl;
                  }

int main(){
       cout<<"***** Object Student && Object UnderGraduate *****"<<endl;
       Student a1("Nitichai","Sawangsai","59160668");
       UnderGraduate a2(1,"Nitichai","Sawangsai","59160668");
       a1.printStudent();
       a2.printUnderGraduate(); 
       cout<<endl;

       cout<<"***** Object Student && Object Student *****"<<endl;
       Student a3("Nitichai","Sawangsai","59160668");
       Student a4("Nitichai","Sawangsai","59160668");
       if(a3.checkEqual(a4.getId())== 1){
          cout<<"Duplicate ID"<<endl;
       }
       a3.printStudent();
       a4.printStudent();
       cout<<endl;
 
        
       cout<<"***** Object UnderGraduate && Object UnderGraduate *****"<<endl;
       UnderGraduate a5(1,"Nitichai","Sawangsai","59160668");
       UnderGraduate a6(1,"Nitichai","Sawangsai","59160668");
       if(a5.checkEqual(a6.getId())== 1){
          cout<<"Duplicate ID"<<endl;
       }
       a5.printUnderGraduate(); 
       a6.printUnderGraduate(); 
       cout<<endl;



	return 0;
}//mian

