#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
class Basket {
	private:
		int item[10];
		int index;
	public: 
		Basket(){
			for(int i=0;i<=10;i++){
				item[i]=0;
			}
			index=0;
		}
		Basket(int in){
                   index=in;
		}
		int additem(){
                        int a=0,b=0,c=0;
			for(int i=0;i<index;i++){
				if(item[i]<5){
					a=a+item[i];
				} if(item[i]>=5 &&item[i]<10){
					b=b+item[i];
				} if(item[i]>=10){c=c+item[i];}
			}
			        cout<<a<<endl
				<<b<<endl
				<<c<<endl;
		}
                int sum(int i,int pp){
                    item[i]=pp;
                }

};
int main() {
	int i,pp=0,num=0;
	cin>>num;
                 Basket nnn(num);
	for(i=0;i<num;i++){
		cin>>pp;
                 nnn.sum(i,pp);
	}
        nnn.additem();
	return 0;
}//end main 
