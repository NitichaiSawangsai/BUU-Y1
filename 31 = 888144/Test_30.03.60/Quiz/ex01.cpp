#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Wheel {
	protected : 
		int size;
		string brand;
	private :
	public    :
             Wheel(){
               size=0;
               brand=" ";
             }
             Wheel(int s,string b){
                 size=s;
                 brand=b;
             }
             void setValue(int s,string b){
                 size=s;
                 brand=b;
             }
             int getSize(){
                return size;
             }
             string getbrand(){
                 return brand;
             }
};
class car {
	private :
                string brand;
                string modal;
                Wheel wheelCar;
	public    :
                car(){
                   brand=" ";
                   modal=" ";
                }
               
                void setValue (string b,string m ,Wheel w){
                      brand=b;
                      modal=m;
                      wheelCar.setValue(w.getSize(),w.getbrand());    
                }
                void print(){
                         cout<<"========= Car ========="<<endl;
                         cout<<"Brand : "<<brand<<endl;
                         cout<<"Model :  "<<modal<<endl;
                         cout<<"Wheel :  "<< wheelCar.getSize()<<" "<<wheelCar.getbrand()<<endl;
                        
                }            
     
};
int main(){
       Wheel a1;
       a1.setValue(18,"inch ENKEI");
          
       car aa;
       aa.setValue("Honda","Civic",a1);
       aa.print();
          
	return 0;
}//main

