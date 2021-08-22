#include<iostream>
#include <string.h>    
#include <iomanip>
using namespace std;
class petType {
   public:
        void print(){
            cout << "Name: " << name;
		}
        petType(string n = ""){
        	name = n;
		}

    private:
        string name;
};

class dogType: public petType {
	public:
   		void print(){
   			petType::print();
 		    cout << ", Breed: " << breed << endl;
		}
    	dogType(string n = "", string b = ""): petType(n){
    		breed = b;
		}	
	private:
   		string breed;
};

void callPrint(petType& p){	
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
}//main
