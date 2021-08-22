using namespace std;
#include <iostream>     //              Language  C++                 //
#include <string.h>     //             Input Letter                   //
#include <iomanip>
class personType{
	private:
    	string firstName; //variable to store the first name
    	string lastName;  //variable to store the last name
    public:
		personType(string first = "", string last = ""){
			firstName = first;
			lastName = last;
		}
		void setName(string first, string last){
			firstName = first;
			lastName = last;
		}
		string getFirstName() const{
			return firstName;
		}
        string getLastName() const{
        	return lastName;
		}
        void print() const{
        	cout << firstName << " " << lastName;
		}
};
class employeeType: public personType{
	private:
    	long personId;     //stores the id
    public:
	   	employeeType(string first = "", string last = "", long id = 0): personType(first, last) {
	   		 personId = id;	
		}
		void setId(long id){
			personId = id;
		}
    	long getId() const{
    		return personId;
		}
    	virtual double calculatePay() const = 0;
		virtual void print() const = 0;
   	
};
class partTimeEmployee: public employeeType{
	private:
    	double payRate;     //stores the pay rate
    	double hoursWorked; //stores the hours worked
    public:
    	partTimeEmployee(string first, string last,long id,double rate, double hours): employeeType(first, last, id){
    	 	payRate = rate;
  			hoursWorked = hours;	
		} 
    	void set(string first, string last, long id, double rate, double hours){
    		setName(first, last);
    		setId(id);
    		payRate = rate;
    		hoursWorked = hours;
		}
    	void setPayRate(double rate){
    		payRate = rate;
		}
    	double getPayRate(){
    		return payRate;
		}
    	void setHoursWorked(double hours){
    		 hoursWorked = hours;
		}
    	double getHoursWorked(){
    		 return hoursWorked;
		}
    	double calculatePay() const{
    		return (payRate * hoursWorked);
		}
    	void print() const{
    		cout << "Id: " << getId() << endl;
    		cout << "Name: ";
    		personType::print();     
    		cout << endl;
  		    cout << "Wages $" << calculatePay() << endl;
		}
};
class fullTimeEmployee: public employeeType{	
	private:
    	double empSalary; 
    	double empBonus;
    public:
	    fullTimeEmployee(string first = "", string last = "", long id = 0, double salary = 0,double bonus = 0): employeeType(first, last, id){
	    	empSalary = salary;
  			empBonus = bonus;
		}	
	    void set(string first, string last, long id,double salary, double bonus){
	    	setName(first, last);
    		setId(id);
  		    empSalary = salary;
    		empBonus = bonus;
		}
	    void setSalary(double salary){
	    	empSalary = salary;
		}
    	double getSalary(){
    		return empSalary;
		}
    	void setBonus(double bonus){
    		empBonus = bonus;
		}
   		double getBonus(){
   			return empBonus;	
		}
   		double calculatePay() const{
   			return empSalary + empBonus;
		} 
   		void print() const{
   			cout << "Id: " << getId() << endl;
    		cout << "Name: ";
    		personType::print();     
   		 	cout << endl;
    		cout << "Wages $" << calculatePay() << endl;
		}
};

int main(){
    fullTimeEmployee newEmp("John", "Smith", 75, 56000, 5700);
    partTimeEmployee tempEmp("Bill", "Nielson", 275, 15.50, 57);

    newEmp.print();
    cout << endl;
    tempEmp.print();

    return 0;
}
