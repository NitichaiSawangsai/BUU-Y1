using namespace std;
#include <iostream>     //              Language  C++                 //
#include <string.h>     //             Input Letter                   //
#include <iomanip>
class petType {
	private:
    	string name;  
    public:
		petType(string n = ""){
		 	name = n;
		}
    	virtual void print(){
    		cout << "Name: " << name;
		}
};
class dogType: public petType{
	private:
    	string breed;
    public:
    	dogType(string n = "", string b = ""): petType(n){
    		breed = b;
		}
    	void print(){
    		petType::print();
  			  cout << ", Breed: " << breed << endl;
		}
};

void callPrint(petType *p) { //p is a value parameter	
    p->print();
}

int main(){
    petType *q;                                  //Line 1
    dogType *r;                                  //Line 2

    q = new petType("Lucky");                    //Line 3
    r = new dogType("Tommy", "German Shepherd"); //Line 4

    q->print();                                  //Line 5
    cout << endl;                                //Line 6
    r->print();                                  //Line 7 

    cout << "*** Calling the function callPrint  ***"<< endl;                          
    callPrint(q);                                //Line 9
    cout << endl;                                //Line 10
    callPrint(r);                                //Line 11

    return 0;
}
