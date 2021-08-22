#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class BankAccount {
	private :
		string name;
		double balance; 
	public    :
		BankAccount (string Name){
			name=Name;  
			balance=500.000;
		}
		void deposit(double deposit){
			balance+=deposit;
		}
		bool withdraw(double deposit){
			double  sum=0;
			sum=balance-deposit;
			if(sum>=0){ 
				if(balance>0){
					balance-=deposit;
				}
			}else{
				cout<<"****** not enough money *******"<<endl;
			}
		} 
		void setName(string Name){
			name=Name;
		}
		void setbalance(double BB){
			balance=BB;
		}
		double getbalance(){
			return balance;
		}
		void print(){
			cout<<"Account Name : "<<name<<endl;
			cout<<"Account balance : "<<balance<<endl;
		}
};

class SavingAccount :  public  BankAccount {
	public   :
		SavingAccount(string name):BankAccount(name){
			setbalance(500);
		}
		void postlnterest(double deposit){
			double sum=0;
			sum=(deposit/100)*2.00;
			BankAccount::deposit(sum); 
		}
		void withdraw (double deposit1){
			if(deposit1<=50000){
				BankAccount::withdraw(deposit1);
			}else{
				cout<<"*******  You can not withdraw more than 50,000 Baht.  *******"<<endl;
			}
		}
		void print(){
			BankAccount::print();
		}
};
class CurrentAccount : public  BankAccount {
	public  :
		CurrentAccount(string name1):BankAccount(name1){
			setbalance(2000);
		}
		void withdraw (double deposit1){
			if(deposit1<=500000){
				int nab=0,num_withdraw=0;
				double sum=0.00;
				num_withdraw=deposit1;
				while(num_withdraw>=10000.000){
					num_withdraw-=10000;
					nab++;
				} 
				sum=deposit1+(nab*120);
				BankAccount::withdraw(sum);
			}else{
				cout<<"****  You can not take more than 500,000 Baht ****"<<endl;
			}
		}


};
int main(){
	BankAccount aa("Nitichai Sawangsai");
	aa.deposit(0);  //ฝาก
	aa.withdraw(0);         //ถอด
	aa.print();

	cout<<endl<<endl;
	SavingAccount bb("UUUUuuuuUuuu");
	bb.deposit(0);      //ฝาก
	bb.postlnterest(0);   //ดอกเบี่ย
	bb.withdraw(0);         //ถอด
	bb.print();

	cout<<endl<<endl;
	CurrentAccount cc("NMNMNMNMNM");
	cc.deposit(0);   //ฝาก
	cc.withdraw(0);   //ถอด
	cc.print();
	return 0;
}//main

