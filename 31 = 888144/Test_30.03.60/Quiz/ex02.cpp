#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Fan  { 
	private :
               int level;
	public  :
            Fan(){
                 level=0;
            }
            void OpenLevel(int l){
                level=l;  
            }
            void Off(){
               level=0;
            }
            int getStatus(){
               return level;
            }
            

};

class ControlBoard  {
	private :
               Fan fans[5];
	public    :
               ControlBoard(){
                   for(int i=0;i<5;i++){
                       fans[i].Off();
                   }  
               }
               void openFan(int index,int level){
                  fans[index-1].OpenLevel(level);       
               }
               void offFanAll(){
                   for(int i=0;i<5;i++){
                       fans[i].Off();
                   }  
               }
               void print(){
                   for(int i=0;i<5;i++){
                      
                         cout<<"Fan["<<i+1<<"] is ";

                         if((fans[i].getStatus())>0){
                              cout<<"level "<<fans[i].getStatus()<<endl;
                         }else{
                              cout<<"off"<<endl;
                         }
                   }
                   
               }
 
 
};
int main(){
         ControlBoard aa;
         aa.openFan(2,4);
         aa.openFan(4,3);
         aa.print();
	return 0;
}//main

