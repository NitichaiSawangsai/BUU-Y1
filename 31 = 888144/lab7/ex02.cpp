#include <iostream>
#include <string>
using namespace std;
class Date{
    private :
        int day;
        int month;
        int year;
    public:
        Date(){
            day = 0;
            month = 0;
            year = 0;
            cout << "Construct Date" << endl;
        }
        Date(int d, int m, int y){
            day = d;
            month = m;
            year = y;
        }
        void setDate(int d, int m, int y){
            day = d;
            month = m;
            year = y;
        }
        void print(){
            cout << day << "/" << month << "/" << year << endl;
        }
        void passOneDay(){
            day++;
        }
};

class Person{
    private:
        string firstname;
        string lastname;
    public:
        Person(){
            firstname = "";
            lastname  = "";
            cout << "Construct Person" << endl;
        }
        Person(string f, string l){
            firstname = f;
            lastname = l;
        }

        void setName(string f, string l){
            firstname = f;
            lastname = l;
        }
        void print(){
            cout << firstname << " "  << lastname << endl;
        }
};

class PersonInfo{
    private:
        string ID;
        Date birthday;
        Person name;
    public:
        PersonInfo(){
            cout << "Construct PersonInfo " << endl;
        }
        PersonInfo(string id, string f, string l, int d, int m, int y) : name(f,l), birthday(d,m,y) {
            ID = id;
//            name.setName(f,l);
//            birthday.setDate(d,m,y);
        }
        void print(){
            cout << "--------- Person Info --------" << endl;
            cout << "ID : " << ID << endl;
            name.print();
            birthday.print();
            cout << "------------------------------" << endl;
        }

        void setBirthDay(int d, int m, int y){
            birthday.setDate(d,m,y);
        }
        void setBirthDay(Date d){
            birthday = d;
        }

};


int main(){
    /*
       Date today;
       Date tomorrow(23, 2, 2017);
       today.setDate(22,2,2017);
       today.print();
       cout << "night ... morning" << endl;
       today.passOneDay();
       today.print();
     */
    PersonInfo p("1234", "OOM", "Den",14, 2 , 1998) ;
    p.print();
    p.setBirthDay(14, 1, 1999);
    p.print();

    Date today(22, 2, 2017);
    p.setBirthDay(today);
    p.print();

    return 0;
}
