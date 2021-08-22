#include <iostream>
#include "Person.h"
#include "Student.h"

using namespace std;

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
               void  Student::print(){
                    cout<<"ID : "<<Id<<endl;
                    Person::print();
               }
