using namespace std;
#include <iostream>     //              Language  C++                 //
#include <string.h>     //             Input Letter                   //
#include <iomanip>
class PurposeFlour {
	private :
		double demand;
		double wheatPrices; 
		double tapiocPrices;
		double ricePrices;

		double calWheat(){
			return    (demand*2)/4;
		}
		double calTapioca(){
			return (demand*1)/4;

		}               
		double calRice(){
			return (demand*1)/4;

		}
	public  :
		PurposeFlour(){
			wheatPrices=0.00;
			tapiocPrices=0.00;
			ricePrices=0.00;
		}
		PurposeFlour(double wq,double tp,double rp){
			wheatPrices=wq;
			tapiocPrices=tp;
			ricePrices=rp;

		}
		void setDemand(double d){
			demand=d;
		}
		void print(){
			cout<<fixed<<setprecision(2)<<calWheat()<<" ";
			cout<<fixed<<setprecision(2)<<calTapioca()<<" ";
			cout<<fixed<<setprecision(2)<<calRice()<<endl;
			cout<<fixed<<setprecision(2)<<(wheatPrices*calWheat())+(tapiocPrices*calTapioca())+(ricePrices*calRice());

		}
};
int main (){
	/*       double a,b,c,d; // true
		 PurposeFlour *m;
		 cin >>d>>a>>b>>c;
		 PurposeFlour mPtr(a,b,c);
		 m = &mPtr;
		 m->setDemand(d);
		 m->print();
	 */

	/*
	   double a,b,c,d;
	   cin>>a>>b>>c>>d;
	   PurposeFlour *aa;
	   aa = new  PurposeFlour(b,c,d);
	   aa->setDemand(a);
	   aa->print();
	 */


	///// YEN /////
	double a,b,c,d;
	cin>>a>>b>>c>>d;
	PurposeFlour  *aa = new  PurposeFlour(b,c,d);
	aa->setDemand(a);
	aa->print();
}//END
