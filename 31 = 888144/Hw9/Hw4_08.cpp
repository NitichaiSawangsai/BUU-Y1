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
		string name[2];
		Date birthDay;
	public  :
                int  d,m,y;
		Person(string n1,string n2){
			name[0]=n1;
			name[1]=n2;
                        d=0;m=0;y=0;
		}
		void setBirthDay(Date d){
			birthDay.setDate(d.getDay(),d.getMonth(),d.getyear());
		}
		void findAge(Date today){
			int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
			cout<<endl;
		//	cout<<name[0]<<endl;

			sum1 = today.getyear()*360 + today.getMonth()*30 + today.getDay();
			sum2 = birthDay.getyear()*360 + birthDay.getMonth()*30 + birthDay.getDay();
			int ans = sum1 - sum2 ;
			d=-1*((ans/30)/12);
			m=-1*((ans/30)%12);
			y=-1*(ans%30);

		}
                string getName(){
                  return  name[0];
                }
		void findOlder(){
                           if(d>0||m>0||y>0){
                                cout<<name[0]<<" Younger than "<<name[1]<<endl;
                           }else if(d<0||m<0||y<0){
                               cout<<name[0]<<" Older than "<<name[1]<<endl;
                           }else if(d==0||m==0||y==0){
                               cout<<"Same Birthday"<<endl;
                           }
                }

};
int main(){
	int d1,m1,y1;
	string ch1,ch2;
	cin>>ch1;
	cin>>d1>>m1>>y1;
        cin>>ch2;
	Date vv,vd;
	vv.setDate(d1,m1,y1);
	Person aa(ch1,ch2);
	aa.setBirthDay(vv);

	cin>>d1>>m1>>y1;
	vd.setDate(d1,m1,y1);
	aa.findAge(vd);
        aa.findOlder();
	return 0;
}//main
