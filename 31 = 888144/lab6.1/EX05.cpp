#include <iostream>
#include <string>
using namespace std;
class Fraction {
	private:
		int numerator;
		int denominator;
		int _z,_x;
		int sum;        
		// Greatest common Divisor
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
		Fraction(int n, int d){ //,int z,int x){
			numerator = n;
			denominator = d;
	//		_z=z;
	//		_x=x;
		}//Fraction(int n, int d)
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
		void setValue(int n, int d,int z,int x){
			numerator = n;
			denominator = d;
			_z=z;
			_x=x;
		}//setValue
		Fraction multiply(int x){
		
		  				 numerator *= x;
		   				 denominator *= x;
		}
		Fraction add(Fraction f2){
				numerator += f2.numerator;
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
    
	int a,b,c,d;
					cin >> a >> b >> c >> d;
	
	Fraction aa(a,b);
 	Fraction bb(c,d);
	
			aa.multiply(d);
			bb.multiply(b);
	        	
					aa.add(bb);
				
				aa.make();
				aa.print();
	
	return 0;
}//end main 
