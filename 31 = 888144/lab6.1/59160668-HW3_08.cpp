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
		Fraction multiply(int x){
			numerator *= x;
			denominator *= x;		   			
		}
		Fraction add(Fraction f2){
			numerator += f2.numerator;
		}
		Fraction difference (Fraction f1){
			numerator = f1.numerator - numerator;
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
	Fraction aa[100],bb[100]; 
	int num[100];
	int i,Num;
	string ch;
	cin>>Num;
	cin >> num[0] >> num[1];
	aa[0].setValue(num[0],num[1]);				
	for(i=0;i<Num-1;i++) {
			cin>>ch>>num[0]>>num[1];
			aa[i+1].setValue(num[0],num[1]);
			int x = aa[i+1].getDenominator() ;
			int z = aa[i].getDenominator();
			aa[i].setValue(aa[i].getNumerator(),aa[i].getDenominator());
			aa[i+1].setValue(aa[i+1].getNumerator(),aa[i+1].getDenominator());			
			aa[i].multiply(x);
			aa[i+1].multiply(z);
			if(ch=="add"){			   	    
				aa[i+1].add(aa[i]);
			}else if(ch=="minus"){
				aa[i+1].difference(aa[i]);				
		   } 
		
	}//for i
	if(Num==1) {
	     aa[Num-1].print();
	}else{
    aa[Num-1].make();
	aa[Num-1].print();
    }
	return 0;
}//end main 
