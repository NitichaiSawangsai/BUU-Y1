using namespace std;
#include <iostream>     //              Language  C++                 //
#include <string.h>     //             Input Letter                   //
#include <iomanip>
class Promotion{
	private :
		int price;
		int numPerson;
	public  :
		Promotion(){
			price = 200;
			numPerson = 0;
		}
		void setNumPerson(int n){
			numPerson=n;
		}
		int calculateCost(){
			if(numPerson>=4){
                                            int sum=0;
                                            int sum1=0;
                                            int sum2=0;
                                              sum1=numPerson/4;
                                              sum2=numPerson%4;
                                              sum=(600*sum1)+(price*sum2);
				return sum;
			}else{
				return  price*numPerson;
			}
		}
};
int main (){
	Promotion aa;
	int num;
	cin>>num;
	aa.setNumPerson(num);
	cout<<aa.calculateCost()<<endl;
}//END
