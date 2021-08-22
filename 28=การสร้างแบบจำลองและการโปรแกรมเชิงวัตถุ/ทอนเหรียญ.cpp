#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;

int main()
{
	int coin,sum;
	cout << "Input Coin = ";
	cin >> coin;
	
	if(coin>=20){
		sum = coin/20;
		coin = coin%20;
		cout << "Coin 20 bath = " << sum << endl;
	}
	if(coin>=10){
		sum = coin/10;
		coin = coin%10;
		cout << "Coin 10 bath = " << sum << endl;
	}
	if(coin>=5){
		sum = coin/5;
		coin = coin%5;
		cout << "Coin 5 bath = " << sum << endl;
	}
	if(coin>=2){
		sum = coin/2;
		coin = coin%2;
		cout << "Coin 2 bath = " << sum << endl;
	}
	if(coin==1){
		cout << "Coin 1 bath = " << sum ;
	}
	
	return 0;
}
