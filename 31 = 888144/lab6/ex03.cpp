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
		void setTimeIn(int day, int h, int m);
		void print();
                double setTimeIn();
                bool calculateIncentive();
                void setSalary(double s);
                double getSalary();
	private:
		double salary;
		string firstName;
		string lastName;
                int Hourin[10];
                int Minin[10];
};
Employee::Employee(){
	salary=0;
	firstName=' ';
	lastName=' ';

}//Employee
Employee::Employee(string first,string last,double s){
	setFirstName(first); 
	setLastName(last);
        salary=s;
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

void Employee::setSalary(double s){
           salary=s;
}
double  Employee::getSalary(){
         return  salary;
}



void Employee::print(){
	cout << getFirstName() << " " << getLastName() 
		<<", Salary : "   << getSalary() << endl;
	if(calculateIncentive()) {
		cout << "Bonus : " << 500.00 << endl;
	}else{
		cout << "Bonus : " << 0.00 << endl;
	}

}
bool Employee::calculateIncentive(){
    int i,k=0;
    for(i=0;i<10;i++){
          if(Hourin[i]<=8&&Minin[i]<=30){
               k++;
           }
    }
      if(k==10){return 1;}
      else{return 0;}

}
void Employee::setTimeIn(int day, int h, int m){
          Hourin[day]=h;
          Minin[day]=m;
}
int main() {
	Employee nadach("Nadech","Kugimiya",30000.00);
	Employee yaya("Yaya","Urassaya",34000.00);

	nadach.setTimeIn(0, 8, 10);
	nadach.setTimeIn(1, 8, 11);
	nadach.setTimeIn(2, 8, 12);
	nadach.setTimeIn(3, 8, 13);
	nadach.setTimeIn(4, 8, 10);
	nadach.setTimeIn(5, 8, 11);
	nadach.setTimeIn(6, 8, 12);
	nadach.setTimeIn(7, 8, 20);
	nadach.setTimeIn(8, 8, 20);
	nadach.setTimeIn(9, 8, 10);

	yaya.setTimeIn(0, 8, 10);
	yaya.setTimeIn(1, 8, 11);
	yaya.setTimeIn(2, 8, 40);
	yaya.setTimeIn(3, 8, 13);
	yaya.setTimeIn(4, 8, 10);
	yaya.setTimeIn(5, 8, 11);
	yaya.setTimeIn(6, 8, 12);
	yaya.setTimeIn(7, 8, 20);
	yaya.setTimeIn(8, 8, 20);
	yaya.setTimeIn(9, 8, 10);
	nadach.print();
	yaya.print(); 
	return 0;
}//end main 
