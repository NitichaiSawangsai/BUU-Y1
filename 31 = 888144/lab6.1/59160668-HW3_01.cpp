#include <iostream>
#include <string>
using namespace std;
class Fraction {
	private:
		int numerator;
		int denominator;
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
		}//Fraction()
		Fraction(int n, int d){
			numerator = n;
			denominator = d;
		}//Fraction(int n, int d)
		int getDenominator(){
			return denominator;
		}//getDenominator
		int getNumerator(){
			return numerator;
		}//getNumerator
		void setValue(int n, int d){
			numerator = n;
			denominator = d;
		}//setValue
		void print(){
			cout << numerator << "/" << denominator << endl;
		}//print
};
int main() { 
    int num[2];
    cin>>num[0]>>num[1];
    Fraction aa(num[0],num[1]);
    aa.print();
	return 0;
}//end main 
