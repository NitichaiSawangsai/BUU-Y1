//ข้อ 2
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
class Employee {
	public :
		Employee();
		Employee(string first,string last,double s);
		void setFirstName(string first);
		string getFirstName();
		void setLastName(string last);
		string getLastName();
		void setSalary(double s);
		double getSalary();
		void increaseSalary (int percent);
		void print();
		void print1();
	private:
		double _s,salary;
		string _first;
		string _last;
};
Employee::Employee(){
	_s=0;
        salary=0;
	_first=' ';
	_last=' ';

}//Employee
Employee::Employee(string first,string last,double s){
	setFirstName(first); 
	setLastName(last);
	setSalary(s); 
}//Employee(string first,string last,double s)
void Employee:: setFirstName(string first){
	_first=first;
}// setFirstName
string  Employee::getFirstName(){
	return _first;
}//getFirstName
void  Employee::setLastName(string last){
	_last=last;
}//setLastName
string  Employee::getLastName(){
	return _last;
}//getLastName
void Employee::setSalary(double s){
	_s=s;
}//setSalary
double Employee::getSalary(){
	return _s;
}//getSalary
void Employee::increaseSalary (int percent){

       salary=(_s*percent)/100;
       salary=salary+_s;
}//increaseSalary
void Employee::print(){
	cout << getFirstName() << " "<< getLastName() 
		<<", Salary : " << fixed << setprecision(2) 
		<< getSalary() << endl;
}//print
void Employee::print1(){
	cout << getFirstName() << " "<< getLastName() 
		<<", Salary : " << fixed << setprecision(2) 
		<< salary << endl;
}//print1
int main() { 
	Employee a[10];
	string first,last,sum;
	double s;
	int num,sum_num=0,i;

	Employee nadach("Nadech","Kugimiya",30000.00);
	Employee yaya("Yaya","Urassaya",34000.00);
	cout << "Employee 1 : " ;
	nadach.print();
	cout << "Employee 2 : " ;
	yaya.print();
	cout << "Increasing Salaries 10%" << endl;
	nadach.increaseSalary(10);
	yaya.increaseSalary(10);
	cout << "Employee 1 : " ;
	nadach.print1();
	cout << "Employee 2 : " ;
	yaya.print1();

	return 0;
}//end main 
