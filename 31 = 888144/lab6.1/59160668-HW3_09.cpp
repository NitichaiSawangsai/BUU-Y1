#include <iostream>
#include <string>
using namespace std;
class Fraction {
	private:
		int numerator;
		int denominator;
		int _z,_x;
		int sum;        
		int gcd(int a, int b){
			int c;
			while(a != 0) {
				c = a;
				a = b % a;
				b = c;
			}//while(a != 0)
			return b;
		}//gcd
	public:
		Fraction(){
			numerator = -1;
			numerator = -1;
			sum=0;
		}//Fraction()
		Fraction(int n, int d) {
			numerator = n;
			denominator = d;
		}//Fraction(int n, int d)
		void setDenominator(int a){
			denominator=a;
		}
		int getDenominator(){
			return denominator;
		}//getDenominator
		int getNumerator(){
			return numerator;
		}//getNumerator
		int getNum_z(){
			return _z;
		}//getNumerator
		int getNum_x(){
			return _x;
		}//getNumerator
		void setValue(int n, int d){
			numerator = n;
			denominator = d;
		}//setValue
		Fraction add(Fraction f2){
			numerator = f2.numerator*denominator+numerator*f2.denominator;
			denominator = f2.denominator*denominator;
		}
		Fraction difference (Fraction f2){
			numerator = f2.numerator*denominator-numerator*f2.denominator;
			denominator = f2.denominator*denominator;
			}
		int Mul(Fraction f3){
			numerator=numerator*f3.numerator;//_z
			denominator=denominator*f3.denominator;//_x
		}
		int Div(Fraction f4) {
			int n=numerator,d=denominator;
			numerator=f4.numerator*d;//_x
			denominator=f4.denominator*n;//_z
		}
		int make(){
			sum=gcd(numerator,denominator);
			if(sum<0){
				sum*=-1;
			}
			numerator=numerator/sum;
			denominator=denominator/sum;
		
		}
		void print(){
		    cout << numerator << "/" << denominator << endl;
		}//print
}; 
int main() {
	Fraction aa[100]; 
	int num[100];
	int i,Num;
	string ch;
	cin>>Num;
	cin >> num[0] >> num[1];
	aa[0].setValue(num[0],num[1]);				
	for(i=0;i<Num-1;i++) {
			cin>>ch>>num[0]>>num[1];
			aa[i+1].setValue(num[0],num[1]);						
			if(ch=="add"){
				aa[i+1].add(aa[i]);
			}else if(ch=="minus"){
				aa[i+1].difference(aa[i]);
		    }else if(ch=="mul"){
		    	aa[i+1].Mul(aa[i]);
		    }else if(ch=="div"){
		    	aa[i+1].Div(aa[i]);
		   	}  
	}//for i
	aa[i].make();
	aa[i].print();
	return 0;
}//end main  
