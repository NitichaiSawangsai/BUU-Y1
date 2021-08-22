#include <iostream>
#include <string>
#include <stdio.h>
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

class Team {
	private :
		string name;
		int age;
		int sumMaxTeame;
		double sum;
		int numTeame[20];
		string chTeame[20];
    public :
    	Team (){
    		name=' ';
    		age=0;
    		for(int i=0;i<20;i++){
    			numTeame[i]=0;
    			chTeame[i]=" ";
    		}
    	}
		Team(int i,string _n,int _a){
            name=_n;
            chTeame[i]=_n;	
			age=_a;
		    numTeame[i]=_a; 		
		}
    	 void setNAME (string _n){
    	 	name=_n;     	 	
		 }//setNAME
		 string getNAME (){
		 	return name;
		 }//getNAME
		 void setage(int _a){
		 	 age=_a;
		 }//setage 
		 int getage(){
		 	return age; 
		 }//getage
		 void sumnumTeame(int i,int age,string _n){
		    numTeame[i]=age;
		    chTeame[i]=_n;
		 }
		 void average (){
		     for(int i=0;i<11;i++){
		     	sum+=numTeame[i];
			 }
			 sum=sum/11;
		 }
		 void Max (){
		 	int max=0,numMax_i[100]={0},inder=0,aom=0;
		 	for(int i=0;i<11;i++){
		 		if(i==0){
		 			max=numTeame[i];
			    }
				if(numTeame[i]>max){
					max=numTeame[i];
				}
			}//for i
			for(int i=0;i<11;i++){
			    if(max==numTeame[i]){
			    	inder++;
			    	numMax_i[aom]=i;
					aom++;			    
				}
		    }
			print(inder,numMax_i,aom);
		 }
		 void print (int inder,int aa[100],int aom){
		 	int h=0;
		 	printf("%0.2f\n",sum);
		 	if(inder>1){
		 		cout<<inder<<endl;
			 }
		 	for(int i=0;i<inder;i++){
		 		h=aa[i];
		 	cout<<chTeame[h]<<endl;
		    }
		 }
};
int main() {
	Team as;
	string ch;
	int age,i;
	for (i=0;i<11;i++){
	  cin>>ch>>age;
	  Team aa(i,ch,age);
	  as.sumnumTeame(i,age,ch);
    }
    as.average();
    as.Max();
	return 0;
}//end main  
