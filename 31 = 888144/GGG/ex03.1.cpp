using namespace std;
#include <iostream>     //              Language  C++                 //
#include <string.h>     //             Input Letter                   //
#include <iomanip>
class Pen {
	protected :
                 string msg;
	public  :
             Pen(){
                  msg=" ";
             }
             void setPen(string m){
               msg=m;
             }
             virtual void write(){
               msg=" ";
             }
};
class HighlightPen :  public Pen{
	public  :
             HighlightPen(){
             }
             void write(){
                  string ch;
                  cin>>ch;
               if(msg=="i"||msg=="I"){
                  cout<<"***"<<ch<<"***"<<endl;  
               }else if(msg=="N"||msg=="n"){
                  cout<<ch<<endl; 
               }
             }
};
int main (){
   HighlightPen aa;
   string c;
        cin>>c;
        aa.setPen(c);
        aa. write();
}//END
