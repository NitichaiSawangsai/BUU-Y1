#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Date  {
	private :
		int day;
		int month;
		int year;
	public  :
		Date(){
			day=0;
			month=0;
			year=0;
		}
		void setDate(int d,int m,int y){
			if(d<=30){
				day=d;
			}
			if(m<=12){
				month=m;
			}
			year=y;
		}
		int getDay(){
			return day;    
		}
		int getMonth(){
			return month;    
		}
		int getyear(){
			return year;    
		}
		void print(){
			cout<<getyear()<<" Y "<<endl;
			cout<<getMonth()<<" M "<<endl;
			cout<<getDay()<<" D "<<endl;
		}
};
class Person {
	private :
		string name;
		Date birthDay;
	public  :
		Person(string n){
			name=n;
		}
		void setBirthDay(Date d){
			birthDay.setDate(d.getDay(),d.getMonth(),d.getyear());
		}
		void findAge(Date today){
			int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
			cout<<endl;
			cout<<name<<endl;

			sum1 = today.getyear()*360 + today.getMonth()*30 + today.getDay();
			sum2 = birthDay.getyear()*360 + birthDay.getMonth()*30 + birthDay.getDay();
			int ans = sum1 - sum2 ;
			cout<<(-1*((ans/30)/12))<<" Y "<<endl;
			cout<<(-1*((ans/30)%12))<<" M "<<endl;
			cout<<(-1*(ans%30))<<" D "<<endl;

		}
};
int main(){
	int d1,m1,y1,d2,m2,y2;
	string ch;
	cin>>d1>>m1>>y1;
	cin>>ch;

	Date vv,vd;
	Person aa(ch);
	vv.setDate(d1,m1,y1);
	aa.setBirthDay(vv);

	cin>>d1>>m1>>y1;
	vd.setDate(d1,m1,y1);
	aa.findAge(vd);
	return 0;
}//main
