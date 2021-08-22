#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
class Employee {
	public :
		Employee();
		Employee(string first,string last);
		void setFirstName(string first);
		string getFirstName();
		void setLastName(string last);
		string getLastName();
		void setTimeIn(int day, int h, int m);
		void print(int p);
		double setTimeIn();
		bool calculateIncentive();
	private:
		int k;
		string firstName;
		string lastName;
		int Hourin[10];
		int Minin[10];
};
Employee::Employee(){
	k=0;
	firstName=' ';
	lastName=' ';

}//Employee
Employee::Employee(string first,string last){
	setFirstName(first); 
	setLastName(last);
}//Employee(string first,string last,double s)
void Employee:: setFirstName(string first){
	firstName=first;
}// setFirstName
string  Employee::getFirstName(){
	return firstName;
}//getFirstName
void  Employee::setLastName(string last){
	lastName=last;
}//setLastName
string  Employee::getLastName(){
	return lastName;
}//getLastName




void Employee::print(int p){

	cout << p <<endl ; 

}
bool Employee::calculateIncentive(){
	int i,p=0;
	for(i=0;i<10;i++){
		if(Hourin[i]<=8&&Minin[i]<=30){
                 // p++;
		}else{p++;};
	}
       print(p);
}
void Employee::setTimeIn(int day, int h, int m){
	Hourin[day]=h;
	Minin[day]=m;
}
int main() {
	string chname,chlastname;
	int num[100]={0};
	int h=0,m=0,i;
	cin>>chname>>chlastname;
	Employee nadach(chname,chlastname);
	for(i=0;i<10;i++){
		cin>>h>>m;
		nadach.setTimeIn(i, h, m); 
	}
	nadach. calculateIncentive();
//	nadach.print();
	return 0;
}//end main 
