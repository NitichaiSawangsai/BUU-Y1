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
             virtual void write()=0;
};
class HighlightPen :  public Pen{
	public  :
             HighlightPen(){
             }
             virtual void write(){
                 cout<<msg;
             }
};
int main (){
   HighlightPen aa;
   string c,s;
        cin>>c>>s;
        if(c=="I"){
          aa.setPen(s);
          cout<<"*** ";
          aa.write();
          cout<<" ***"<<endl;
        }if(c=="N"){
          aa.write();
        }
}//END
