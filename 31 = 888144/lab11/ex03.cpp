using namespace std;
#include <iostream>     //              Language  C++                 //
#include <string.h>     //             Input Letter                   //
#include <iomanip>
class Employee{
	protected:
		string firstname;
		string lastname;
		int salary;
	public:
		virtual int calculatePay() =0 ;
	    Employee(){
	    	firstname = " ";
	    	lastname = " ";
	    	salary = 0;
		}
		Employee(string first,string last,int s) {
            firstname=first;
			lastname=last;
			salary=s;			
		}
		void setValue(string first,string last,int s) {
			firstname=first;
			lastname=last;
			salary=s;
		}
		int getsalary() const{
		    return salary;	
		}
		void print() const{
			cout<<firstname<<" "<<lastname<<" "<<salary<<endl;
		}
};   
class Manager : public Employee {
	private:
		int cashPosition;
	public:
		Manager(){
			cashPosition=0;
		}
		Manager(string first,string last,int s,int cas){
			Employee::setValue(first,last,s);
			cashPosition=cas;
		}
		int calculatePay(){
			return Employee::salary+=cashPosition;
		}
		void print() const{
			Employee::print();
		}
};

class SaleMan : public Employee{
	private:
		int saleAmount;
	public:
	    SaleMan(string first,string last,int s,int sal){
			Employee::setValue(first,last,s);
			saleAmount=sal;
		}
	   int calculatePay(){
	      return Employee::salary+=(saleAmount*5)/100;
	   }

};
int main(){
	int num;
	cin>>num;
	int sum=0;

	for(int i=0;i<num;i++){
		int s,cas;
		string ch,first,list;
    	cin>>ch;
		if(ch=="M"||ch=="m"){
        	cin>>first>>list>>s>>cas;
        	Manager M(first,list,s,cas);
        	sum+=M.calculatePay();
    	}
    	
		if(ch=="S"||ch=="s"){
        	cin>>first>>list>>s>>cas;
        	SaleMan S(first,list,s,cas);
        	sum+=S.calculatePay();
    	}

   		if(ch=="G"||ch=="g"){
        	cin>>first>>list>>s;
        	//Employee a;//(first,list,s);
        	sum+=s;
    	}

	}	
	cout<<sum;
	return 0;
}//end main
