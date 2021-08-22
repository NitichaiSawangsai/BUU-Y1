#include <iostream>
#include <string>
using namespace std;
class STUDENTLD {
	public:
		void setID (string Id){
		        _Id=Id;
		}//setID
		string getID(){
			return _Id;
		}//getID
		void setFullname (string ch,string ch1){
			_ch=ch;
                        _ch1=ch1;
                        _ch1=ch+' '+ch1;
		}//setFullname
		string getFullname(){
			return _ch1;
		}//getFullname
                void setGPA (int gpa){
                     _gpa=gpa;
                }//setGPA
                int  getGPA (){
                     return _gpa;
                }//getGPA
		string getScore (int Num){
			char chscore[3];
			if(Num>=80){
				return "A";
			}else if(Num>=75){
				return "B+";
			}else if(Num>=70){
				return "B";
			}else if(Num>=65){
				return "C+";
			}else if(Num>=60){
				return "C";
			}else if(Num>=55){
				return "D+";
			}else if(Num>=50){
				return "D";
			}else if(Num>=0){
				return "F";
			}//if Num
		}//getScore

	private:
		string _Id;
		string _ch,_ch1;
                int _gpa;
                
};
int main() { 
	STUDENTLD in;
        int numgpa;
        string CH,CH1,CH2;
        cin>>CH>>CH1>>CH2;
        cin>>numgpa;
        in.setID(CH);
        in.setFullname(CH1,CH2);
        in.setGPA(numgpa);
        
	      cout<<"Studentld : "<<in.getID()<<endl;
	      cout<<"Fullname  : "<<in.getFullname()<<endl;
	      cout<<"Score : "<<in.getGPA()<<endl;
	      cout<<"Grade : "<<in.getScore(in.getGPA())<<endl;

	return 0;
}//end main i
