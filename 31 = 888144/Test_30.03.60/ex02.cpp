#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Light{
	private :
                int status;
	public  :
              Light(){
                  status=0;
              }
              void switchOn(){
                  status=1;
              }
              void switchOff(){
                  status=0;
              }
              int getStatus(){
                 return status;
              }
};
class LightRail{
          private :
               Light led[5];
          public  :
              LightRail(){
                  for(int i=0;i<5;i++){
                     led[i].switchOff();
                  }
              }
              void  switchOnAll(){
                  for(int i=0;i<5;i++){
                     led[i].switchOn();
                  }
              }
              void  switchOffAll(){
                  for(int i=0;i<5;i++){
                     led[i].switchOff();
                  }
              }
              void switchOnAt(int onAt){
                  led[onAt-1].switchOn();
              }
              void switchOffAt(int onAt){
                  led[onAt-1].switchOff();
              }
              void print(){
                   for(int i=0;i<5;i++){
                        if(led[i].getStatus()==1){
                             cout<<" O ";
                        }else{
                             cout<<" - ";
                        }
                   }
                 cout<<endl;
              }
};

int main(){
       LightRail aa;
        aa.switchOffAll();
        aa.switchOnAt(3);
        aa.print();
	return 0;
}//main

