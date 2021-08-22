#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Person {
	protected : 
		string firstname;
		string lastname;
	private :
	public    :
		Person(){
			firstname=" ";
			lastname=" ";
		}
		Person(string f,string l){
			firstname=f;
			lastname=l;
		}
		void setValue (string f,string l){

		}
		string getName(){
			return firstname+" "+lastname;
		}
};
class Saleman :  protected Person {
	protected :
	private   :
		string employeeld;
		int salary;
		int sale;
	public    :
		Saleman(){
			employeeld=" ";
			salary=0;
			sale=0;
		}
		Saleman(string e,int s1,int s2){
			employeeld=e;
			salary=s1;
			sale=s2;
		}
		int getTotalMoney(){
			return salary+sale;
		}
		void setValue(string id,string f,string l,int s1 ,int s2){
			employeeld=id;
			firstname=f;
			lastname=l;
			salary=s1;
			sale=s2;
		}
		float calculateCommission(){
                      if(sale>=500001){
                           return (sale*0.08);
                      }else if(sale>=300001){
                           return (sale*0.06);
                      }else if (sale>=100001){
                           return (sale*0.04);
                      }else if (sale>=50001){
                           return (sale*0.03);
                      }else{
                           return (sale*0.02);
                      } 
		}
                void print(){
                    cout<<"---------------------------------------------------------------------------------------------"<<endl;
                    cout<<"|Employee ID    |   Name Lastname     |   salary    |  sale   |   Commission   | Total Money |"<<endl;
                    cout<<"---------------------------------------------------------------------------------------------"<<endl;
                    cout<<"  "<<employeeld<<"           "<<firstname+" "+lastname<<"               "<<salary<<"       "<<sale<<"     "<<calculateCommission()<<"      "<<salary+calculateCommission()<<endl;
                    cout<<"---------------------------------------------------------------------------------------------"<<endl;
                    
                }



};
int main(){
           Saleman aa;
           aa.setValue("00000001","Ryan","Gig",50000,50000);
           aa.print();
          
	return 0;
}//main

