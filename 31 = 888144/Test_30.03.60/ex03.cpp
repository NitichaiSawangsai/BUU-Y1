#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Person{
	protected :
		string firstname;
		string lastname;
	public    :
		Person(){
			firstname=" ";
			lastname=" ";
		}
		void setValue(string f,string l){
			firstname=f;
			lastname=l;
		} 
		string getName(){
			return firstname+" "+lastname;
		}
};


class Employee :  protected  Person {
	protected :
	private  :
		string employeeld;
		int salary;
		int postionAllowance;
	public   :
		Employee(){
			employeeld=" ";
			salary=0;
			postionAllowance=0;
		}
		Employee(string e,string f,string l,int s,int p){
			employeeld=e;
			firstname=f;
			lastname=l;
			salary=s;
			postionAllowance=p;
		}
		int getTotalMoney(){
			return salary+postionAllowance;
		}
		float calculateTax(){
			if(getTotalMoney()>400001){
				return getTotalMoney()- (getTotalMoney()*0.05);
			}else if (getTotalMoney()>=300001){
				return getTotalMoney()- (getTotalMoney()*0.05);
			}else if (getTotalMoney()>200001){
				return getTotalMoney()- (getTotalMoney()*0.05);
			}else if (getTotalMoney()>=100001){
				return getTotalMoney()- (getTotalMoney()*0.05);
			}else{
				return getTotalMoney();
			}
		}
		void print(){
			cout<<"-------------------------------------------------------------------------------------"<<endl;
			cout<<"Employee ID      Name Lestname        Salary       postionAllowance       Total Money"<<endl; 
			cout<<"-------------------------------------------------------------------------------------"<<endl;
			cout<<" "<<employeeld<<"       "<<firstname+" "+lastname<<"    "<<salary<<"         "<<postionAllowance<<"                  "<<calculateTax()<<endl;
			cout<<"-------------------------------------------------------------------------------------"<<endl;

		}
};
int main(){
	Employee aa("00000001","Nitichai","Sawangsai",100000,50000);
	aa.print();
	return 0;
}//main

