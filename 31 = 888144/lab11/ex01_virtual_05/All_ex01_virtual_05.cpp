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
		void setBreed(string b = ""){
			breed = b;
		}
    	void print(){
    		petType::print();
  			  cout << ", Breed: " << breed << endl;
		}
};

int main(){
    petType *pet; 
    dogType *dog;

    dog = new dogType("Tommy", "German Shepherd");  

    dog->print();

    pet = dog;
    dog->setBreed("Siberian Husky");

    pet->print();

    return 0;
}
