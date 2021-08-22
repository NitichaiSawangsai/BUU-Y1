#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class PersonType {
	private :
		string firstname;
		string lastname;
	public    :
		PersonType (){
			firstname=" ";  
			lastname=" ";
		}
		PersonType (string first,string last){
			firstname=first;  
			lastname=last;
		}
		void setName(string first,string last){
			firstname=first;  
			lastname=last;
		}
		string getFullName(){
			return firstname+' '+lastname;
		}
		string getFirstName(){
			return  firstname;
		}
		string getLastName(){
			return lastname;
		}
		void print(){
			cout<<"Nursing name : "<<firstname+' '+lastname<<endl;
		}

};
class Nurse :  public PersonType {
	private :
		double dailyFee;
	public   :
		Nurse(){
			dailyFee=0.00;
		}
		Nurse(double daily){
			dailyFee=daily;
		}

		void setDailyFee(double daily){
			dailyFee=daily; 
		}
                double getDailyFee(){
                    return dailyFee;
                }
		void print(){
			cout<<"The number of recuperation  : "<<dailyFee<<endl;
		}
};
class Room  {
	private :
		string roomNo;
		double roomFee;
	public  :
		Room(){
			roomNo=" ";
			roomFee=0;
		}
		void setRoom (string No,double Fee){
			roomNo=No;
			roomFee=Fee;
		}
                double getroomFee(){
                   return roomFee;
                }
		void print(){
			cout<<"RoomNo : "<<roomNo<<endl;
			cout<<"RoomEee : "<<roomFee<<endl;
		}
};

class BillType {
	private :
		int Amount_of_rehabilitation;
		Nurse Special_nurse;
		Room  rehabilitation;
	public  :
		BillType(){
			Amount_of_rehabilitation=0;
		}
		void setAmount_of_rehabilitation (int Amount){
			Amount_of_rehabilitation = Amount;
		}
		void setRoom(string ROOMNo,double ROOMFee) {
			rehabilitation.setRoom(ROOMNo,ROOMFee);
		}
		void setNurse(string f,string l,double Fee){
			Special_nurse.setDailyFee(Fee);
			Special_nurse.PersonType::setName(f,l);
		}
		void print(){
			Special_nurse.PersonType::print();
			Special_nurse.print();  // Nurse
			rehabilitation.print(); //Room        
                  cout<<"Special nursing care : "<<Amount_of_rehabilitation * Special_nurse.getDailyFee()<<endl;
                  cout<<"Accommodation fee included : "<<Amount_of_rehabilitation * rehabilitation.getroomFee()<<endl;
                  cout<<"Total cost : "<<(Amount_of_rehabilitation * Special_nurse.getDailyFee()) + (Amount_of_rehabilitation * rehabilitation.getroomFee())<<endl;
		}
};

int main(){

	BillType aa;
        aa.setNurse("Nitichai","Sawangsai",900);
        aa.setRoom("A513",5100);
        aa.setAmount_of_rehabilitation(5);
        aa.print();




	return 0;
}//main

