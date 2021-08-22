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
};

class student{
    private:
        string ID;
        string firstname;
        string lastname;
        Date birthday;
    public:
        student(){
            ID=" ";
            firstname=" ";lastname=" ";
        }
        student(string id, string f, string l, int d, int m, int y) :  birthday(d,m,y) {
            ID = id;
            firstname=f;
            lastname=l;
        }
        void print(){
            cout << "---------- PersonInfo ----------" << endl;
            cout << "ID : " << ID << endl;
            cout << "First Name : "<< firstname << endl;
            cout << "Last Name : "<< lastname << endl;
            cout << "Birthday : ";
            birthday.print();
            cout << "--------------------------------" << endl;
        }

        void setBirthDay(int d, int m, int y){
            birthday.setDate(d,m,y);
        }

};


int main(){
    string ID,First_Name,Last_Name;
    int d,m,y;
    cout<<"ID : ";
    cin>>ID; 
    cout<<"First Name : ";
    cin>>First_Name; 
    cout<<"Last Name : ";
    cin>>Last_Name; 
    cout<<"d : ";cin>>d; 
    cout<<"m : ";cin>>m;
    cout<<"y : ";cin>>y;
    cout<<endl; 
    student p(ID,First_Name,Last_Name,d,m,y) ;
    p.print();
    return 0;
}
