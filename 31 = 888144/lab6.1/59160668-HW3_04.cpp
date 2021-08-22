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
		Fraction(int n, int d,int z,int x){
			numerator = n;
			denominator = d;
			_z=z;
			_x=x;
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
		int multiply(){
			numerator=numerator*_x;
			denominator=denominator*_z;
                        

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
	int num[6];
	cin>>num[0]>>num[1]>>num[2]>>num[3];
	Fraction aa(num[0],num[1],num[2],num[3]);
	aa.multiply();
	aa.print();
	return 0;
}//end main 
