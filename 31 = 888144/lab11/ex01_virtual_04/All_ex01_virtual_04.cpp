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

void callPrint(petType p) { //p is a value parameter	
    p.print();
}

int main(){
    petType pet("Lucky");                     //Line 1
    dogType dog("Tommy", "German Shepherd");  //Line 2

    pet.print();                              //Line 3
    cout << endl;                             //Line 4
    dog.print();                              //Line 5

    cout << "*** Calling the function callPrint  ***"
         << endl;                             //Line 6
    callPrint(pet);                           //Line 7
    cout << endl;                             //Line 8
    callPrint(dog);                           //Line 9            
    cout << endl;                             //Line 10

    return 0;
}
