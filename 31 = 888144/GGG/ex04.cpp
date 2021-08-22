using namespace std;
#include <iostream>     //              Language  C++                 //
#include <string.h>     //             Input Letter                   //
#include <iomanip>
class Product {
	protected :
                 string name;
                 int numOfProduct;
	public  :
             Product(){
                   name=" ";
                   numOfProduct=0; 
             }
             Product(string n,int num ){
               name = n;
               numOfProduct=num;
             }
             string getName(){
                 return name;
             }
             void setNumOfProduct(int num){
                numOfProduct=num;
             }
             int  getNumOfProduct(){
                 return numOfProduct;
             }
          
};
class lnventory {
	private :
                   Product stock[100];
                   int amount; 
	public  :
              lnventory(){
                    amount=0;
              }
              void add (Product p){
                    int TTT=0;
                    for(int i=0;i<100;i++){
                      if(stock[i].getName()==p.getName()){
                               TTT=i;
                      }
                    }
                   if(TTT==0){      
                     amount++;
                     stock[amount]=p;
                   }else{
                      stock[TTT].setNumOfProduct((stock[TTT].getNumOfProduct()+p.getNumOfProduct()));
                   }

              }
              void print(){
                for(int i=1;i<=amount;i++){
                    cout<<stock[i].getName()<<" "<<stock[i].getNumOfProduct()<<endl;
                }
              }
};
int main (){
    lnventory a1;
    string ch;
    int numOf,num;
    cin>>num;
    for(int i=0;i<num;i++){
      cin>>ch>>numOf;
       Product aa(ch,numOf);
       a1.add(aa); 
    }
    a1.print();
}//END
