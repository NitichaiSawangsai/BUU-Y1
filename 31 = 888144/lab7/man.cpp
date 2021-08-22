#include <iostream>
#include <string>
using namespace std;

//  man vs superman
class Man{
    public:
    string name;
    void walk(){
        cout << name << " walk walk walk" << endl;
    }
};

class SuperMan :  public  Man {
    public:
       void fly(){
           cout << name << " go to Sun." << endl;
       }
       void walk(){
           cout << name << " windwalk" << endl;
           Man::walk();
       }

};

int main(){
   Man bancha;
   bancha.name = "Bancha";
   bancha.walk();

   SuperMan clark;
   clark.name = "Clark";
   clark.walk();
   clark.fly();

   return 0;
}

