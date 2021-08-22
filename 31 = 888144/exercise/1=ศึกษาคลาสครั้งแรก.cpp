#include <iostream>
#include <string>
using namespace std;
class  A {
	public :
		A(){
			_name=' ';
			_Id=' ';
		}
		A(string name,string Id){
			_name=name;
			_Id=Id;
		}
		void setName (string name){
			_name=name;
		}
		string getName (){
			return _name;
		}
		void setId (string Id) {
			_Id=Id;
		}
		string getId () {
			return _Id;
		}
                void  checkname (){
                    int numname=0;
                 for(int i=0;i<10;i++){
                     if(Imname[i]==_name){
                      numname++; 
                   }
                 }
                     if(numname==1) {cout<<"OK"<<endl;}
                     else {cout<<"No"<<endl;}
                }
                void setset (int i,string name,string Id){
                     Imname[i]=name;
                     ImId[i]=Id;
                }
	private:
		string _name;
		string _Id;
                string Imname[100];
                string ImId[100];
};

int main() { 
        A  a;
        int i,numInput;
        string nameInput,IdInput;
        cout<<"Num  :"<<endl;
        cin>>numInput;
        for(i=0;i<numInput;i++){cin>>nameInput>>IdInput;}
	return 0;
}//end main 
