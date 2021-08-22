using namespace std;
#include <iostream>     //              Language  C++                 //
#include <string.h>     //             Input Letter                   //
#include <iomanip>
class Person {
	protected :
                 string firstname;
                 string lastname;
	public  :
             Person(){
                firstname = " ";
                lastname = " ";  
             }
             Person(string f,string l){
               firstname=f;
               lastname=l;    
             }
             string getFirstname(){
                 return firstname;
             }
             string getLastname(){
             }
};
class Member :  protected Person{
	private :
                   string  memberld;
                   double price;  
	public  :
              Member(){
                   memberld=" ";
                   price=0.00;
              }
              Member(string id,string f,string l,double p){
                 memberld=id;
                 firstname=f;
                 lastname=l;        
                 price=p;
              }
              double calculatePrice(){
                   if(price>=1000 && price<=2000){
                       return price-((price*5)/100) ;
                   }
                   if ( price>=2001&&price<=4000){
                       return price-((price*10)/100) ;
                   }
                   if(price>=4001&& price<=5000){
                       return price-((price*15)/100) ;
                   } 
                   if( price>=5001){
                       return price-((price*20)/100) ;
                   }
              }
              void print(){
                  cout<<memberld<<endl;
                  cout<<firstname+" "+lastname<<endl;
                  cout<<"Price : "<<fixed << setprecision(2) <<price<<endl; 
                  cout<<"Price (after discountt) : "<< fixed << setprecision(2) <<calculatePrice()<<endl; 
              }

               
};
int main (){
   string ch1,f,l;
   double p;
   cin>>ch1>>f>>l>>p;
   Member aa(ch1,f,l,p);
   aa.print();
}//END
