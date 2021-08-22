#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Person {
     protected :
             string firstname;
             string lastname;
     public  :
          Person(){
                firstname=" ";
                lastname=" ";
          }
          Person(string f,string l){
                    firstname=f;
                    lastname=l;
          }
          void setValue(string f,string l){
                    firstname=f;
                    lastname=l;
          }
          string getnamefirst(){
              return  firstname;                
          }
          string getnamelast(){
              return  lastname;                
          }
};
class Book {
	private :
                int pages;
                string bookname;
                Person author;
	public  :
             Book(){
                pages=0;
                bookname=" ";
             }
             Book(string n,int p,Person a) : author(a){
                bookname=n;
                pages=p;
             }
             void setValue(string n,int p,Person a){
                bookname=n;
                pages=p;
                author.setValue(a.getnamefirst(),a.getnamelast());
             }
             void print(){
                 cout<<"------- Book -------"<<endl;
                 cout<<"Book name : "<<bookname<<endl; 
                 cout<<"Pages     : "<<pages<<endl;
                 cout<<"Authod    : "<<author.getnamefirst()+" "+author.getnamelast()<<endl;
                 cout<<"--------------------"<<endl;
             }  
};

int main(){
   Person a1("Nitichai"," ");
   Book aa("OOP",989,a1);
   //aa.setValue("OOP",989,a1);
   aa.print();      

	return 0;
}//main

