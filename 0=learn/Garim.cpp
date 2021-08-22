
using namespace std;

#include <iostream>
#include <stdlib.h>     

class person {
	private :
		string *firstName;
		string *lastName;
	public  :
		person(){
			firstName = new string [100];
			lastName  = new string [100];
			for(int i=0;i<100;i++){
				firstName[i]=" ";
				lastName[i]=" ";
			}
		} 
		person(int I,string first,string last) {
			firstName[I]=first;
			lastName[I]=last;
		}
		void setperson(int I,string first,string last){
			firstName[I]=first;
			lastName[I]=last;
		}
		string getAllName(int I){
			return firstName[I]+" "+lastName[I];
		} 
		void print(int I){
			cout<<firstName[I]+" "+lastName[I]<<endl;
		}
};
class USER : public person {
	private :
		string username;
		string password;
	public  :
		USER(){
			username=" ";
			password=" ";
		}
		USER(string user,string pass){
			username=user;
			password=pass;
		}
		void setUSER(string user,string pass){
			username=user;
			password=pass;
		}
		string getusername(){
			return username;
		}
		string getpassword(){
			return password;
		}
};
class discount {
	private :
		int Purchase_time;
		int Discount; 
	public  :
		discount(){
			Purchase_time=0;
			Discount=0;
		}
		void setdis(){
			Purchase_time=0;
		}
		void setPurchase_time(){
			Purchase_time++;
		}
		void setDiscount(int D){
			Discount=D;
		}
		int getPurchase_time(){
			return Purchase_time;
		}
		int getDiscount(){
			return Discount;
		}

};
class Security {   //Input == set ( IDpassword && password == 9 )
	private :
		USER *user;
		discount *dis;
		int num;
		int num_I;
	public  :
		Security(){
			num=0;
			num_I=0;
		}
		void setnum(int n){
			num=n;
		}
		void setPurchase_time(){
			dis[num_I+1].setPurchase_time();
		}
		void setdiscount(int count){
			if(count>50&&count<150){
				dis[num_I+1].setDiscount(20);
			}if(count>150&&count<200){
				dis[num_I+1].setDiscount(40);
			}if(count>200){
				dis[num_I+1].setDiscount(60);
			}
		}
		int getDiscount(){
			return dis[num_I+1].getDiscount();
		}
		void setsecurity(USER u,discount d){ 
			num++;
			user = new USER [100];
			user[num]=u;
			dis = new discount [100];
			dis[num]=d;                         
		}
		bool process(){
			int countpass1=0;
			int countpass2=0;
			int countnum=0;
			int num_pass=0;
			string IDpassword2;
			string password2;
			string ee;
			char pass;
			do{
				system("clear");
				cout<<"ID : ";
				cin>>IDpassword2;
				cout<<"Password : ";

				for(int i=0;i<=100;i++){
					if(user[i].getusername() == IDpassword2){	
						num_pass=i;
						break;	
					}
				}
				countnum=user[num_pass].getpassword().size();
				while(countpass2<countnum){
					cin>>pass;
					countpass2++;
					if(countpass2>0){
						ee+="*";
						password2+=pass;
						system("clear");
						cout<<"ID : "<<IDpassword2<<endl; 
						cout<<"Password : ";
						cout<<ee;
					}//if
				}//while

				for(int i=0;i<=100;i++){
					if(user[i].getusername() == IDpassword2){
						if(user[i].getpassword() == password2){
							countpass1=1;
							num_I=i;
							break;
						}
					}

				}
				if(countpass1==1){
					cout<<endl;
					cout<<"++++++ Yes ++++++"<<endl;
					return 1;
				}else{
					cout<<endl;
					cout<<"++++++ No  ++++++"<<endl;
					return 0;
				}
			}while(countpass1!=1 && countpass1!=0);

		}//process
		void setNUM_I (int I){
			num_I=I;
		}
		int getNUM_I(){
			return num_I;
		}
		string getstringNUM_I(){
			return user[num_I].getusername();
		}
		void print (){
			cout <<"Use Id   : "<<user[num_I+1].getusername()<<endl;
			cout <<"Password : "<<user[num_I+1].getpassword()<<endl<<endl;
		}
		void printPurchase_time(){
			cout<<"Discount number : "<<dis[num_I+1].getPurchase_time()<<endl;
		}
		~Security(){
			delete [] user;
		}
};
class beverage {
	private :
		int *BEVERAGE; 
	public  :
		beverage(){
			BEVERAGE = new int [5];
			for(int i=0 ;i<5;i++){
				BEVERAGE[i]=30;
			}
		}
		int getIced_tea(){
			return 45;
		}
		int getbeer(){
			return 55;
		}
		int getchampagne(){
			return 350;
		}
		int getcoffee(){
			return 20;
		}
		int getfruit_juice(){
			return 45 ;
		}
		void menubeverage (){
			cout<<"\n\t\t\t\t\t\t\t\t 1. ICED TEA ["<<BEVERAGE[0]<<"]      Drink Price 45  $ "<<endl;
			cout<<"\n\t\t\t\t\t\t\t\t 2. BEER ["<<BEVERAGE[1]<<"]          Drink Price 55  $ "<<endl;
			cout<<"\n\t\t\t\t\t\t\t\t 3. CHAMPAGNE ["<<BEVERAGE[2]<<"]     Drink Price 350 $ "<<endl;
			cout<<"\n\t\t\t\t\t\t\t\t 4. COFFEE["<<BEVERAGE[3]<<"]         Drink Price 20  $ "<<endl;
			cout<<"\n\t\t\t\t\t\t\t\t 5. FRUIT JUICE ["<<BEVERAGE[4]<<"]   Drink Price 45  $ "<<endl;
			cout<<"\n\t\t\t\t\t\t\t   Exit = 6 "<<endl;
		}             
		void setIced_tea(){
			if(BEVERAGE[0]>0){
				BEVERAGE[0]--;
			}
		}
		void setbeer(){
			if(BEVERAGE[1]>0){
				BEVERAGE[1]--;
			}
		}
		void setchampagne(){
			if(BEVERAGE[2]>0){
				BEVERAGE[2]--;
			}
		}
		void setcoffee(){
			if(BEVERAGE[3]>0){
				BEVERAGE[3]--;
			}
		}
		void setfruit_juice(){
			if(BEVERAGE[4]>0){
				BEVERAGE[4]--;
			}
		}
		int GetIced_tea(){
			return  BEVERAGE[0];
		}int Getbeer(){
			return BEVERAGE[1];
		}int Getchampagne(){
			return BEVERAGE[2];  
		}int Getcoffee(){
			return BEVERAGE[3];
		}int Getfruit_juice(){
			return BEVERAGE[4];
		}

};
class Shop  : public beverage {
	private :
		int *numbev;
	public  :
		Shop(){
			numbev = new int [5];
			for(int i=0;i<5;i++){
				numbev[i]=0;
			}
		}
		void setnumbev(){
			for(int i=0;i<5;i++){
				numbev[i]=0;
			}
		}
		int menubeverage (){
			int select=0,All_prices=0;
			do{ 
				system("clear");
				beverage::menubeverage();
				cout<<"Select : ";
				cin>>select;
				if(select==1){
					if(beverage::GetIced_tea()>0){
						All_prices+=beverage::getIced_tea();
						beverage::setIced_tea();
						numbev[0]++;
					}
				} if (select==2){
					if(beverage::Getbeer()>0){
						All_prices+=beverage::getbeer(); 
						beverage::setbeer();
						numbev[1]++;
					}
				} if (select==3){
					if(beverage::Getchampagne()>0){
						All_prices+=beverage::getchampagne();
						beverage::setchampagne();
						numbev[2]++;
					}
				} if (select==4){
					if(beverage::Getcoffee()>0){
						All_prices+=beverage::getcoffee();
						beverage::setcoffee();
						numbev[3]++;
					}
				} if (select==5){
					if(beverage::Getfruit_juice()>0){
						All_prices+=beverage::getfruit_juice();
						beverage::setfruit_juice();
						numbev[4]++;
					}
				}
			}while(select!=6);
			return All_prices;
		}
		void print (){
			system("clear");
			cout<<"\n\t------------------------------------"<<endl;
			if(numbev[0]>0){
				cout<<"\n\t|\t  ICED TEA       "<<numbev[0]<<"\t   |"<<endl;
			}if(numbev[1]>0){
				cout<<"\n\t|\t  BEER           "<<numbev[1]<<"\t   |"<<endl;
			}if(numbev[2]>0){
				cout<<"\n\t|\t  CHAMPAGNE      "<<numbev[2]<<"\t   |"<<endl;
			}if(numbev[3]>0){
				cout<<"\n\t|\t  COFFEE         "<<numbev[3]<<"\t   |"<<endl;
			}if(numbev[4]>0){
				cout<<"\n\t|\t  FRUIT JUICE    "<<numbev[4]<<"\t   |"<<endl;
			}
			cout<<"\n\t------------------------------------\n";
		}
		void Medal (int COIN){
			int coin=0,sum=0;
			coin = COIN;
			if(coin>=20){
				sum = coin/20;
				coin = coin%20;
				cout << "\t\t\t Coin 20 bath = " << sum << endl;
			}
			if(coin>=10){
				sum = coin/10;
				coin = coin%10;
				cout << "\t\t\t Coin 10 bath = " << sum << endl;
			}
			if(coin>=5){
				sum = coin/5;
				coin = coin%5;
				cout << "\t\t\t Coin 5 bath = " << sum << endl;
			}
			if(coin>=2){
				sum = coin/2;
				coin = coin%2;
				cout << "\t\t\t Coin 2 bath = " << sum << endl;
			}
			if(coin==1){
				cout << "\t\t\t Coin 1 bath = " << sum ;
			}
		}

};

int main (){

	int nummenu; 
	USER aa;
	person qq;
	Security ss;
	discount s2;
	Shop w1;
	beverage w2;
	int userperson=1;
	int ALL_prices=0; 
	ss.setnum(0);
	do{
		system("clear");   
		cout<<"\n\n\n\n\n\t\t\t\t\t\t\t +++ Welcome Shop  +++"<<endl;
		cout<<"\n\t\t\t\t\t\t     1. Register "<<endl;
		cout<<"\n\t\t\t\t\t\t     2. Shop"<<endl;
		cout<<"\n\t\t\t\t\t\t     3. Exit "<<endl<<endl;
		cin>>nummenu;
		switch(nummenu) {
			case 1:
				int exit1;
				do{ 
					string u,p,f,l;
					system("clear");
					cout<<"\n\n\n\n\n\t\t\t\t\t ^ ^ ^ Register  ^ ^ ^ "<<endl;
					cout<<"Create a username : ";
					cin>>u;
					cout<<"Create a password : ";
					cin>>p;
					if(u!="-"&&p!="-"){
						cout<<"First Name : ";
						cin>>f;
						cout<<"last Name : ";
						cin>>l;

						qq.setperson(userperson,f,l);
						aa.setUSER(u,p);
						s2.setdis();
						ss.setsecurity(aa,s2);
					}
					cout<<"\n\n\t\t\t\t Validation \n\n";
					ss.print();
					cout<<"FirstName LastName : ";
					qq.print(userperson);
					ss.printPurchase_time();
					userperson++; 

					cout<<"\n\t\t\t\t Exit = 1 "<<endl;
					cin>>exit1;
				}while(exit1!=1);
				break;
			case 2:
				int exit2; 
				do{
					int member=0;
					int price=0;
					system("clear");
					ALL_prices=w1.menubeverage();
					w1.print();
					cout<<"\n\t\t\t All Prices : "<<ALL_prices<<" $ "<<endl;
					cout<<"\n\n\t\tYou are a member of the store ? \n";
					cout<<"\t\t     1. YES      2. NO          \n";
					cin>>member;
					if(member==1){
						if(ss.process()==1){
							ss.setPurchase_time();
							do{
								system("clear");
								cout<<endl<<endl; 
								qq.print(ss.getNUM_I());
								w1.print();
								cout<<endl;
								ss.setdiscount(ALL_prices);
								ss.printPurchase_time();
								cout<<"Discount        : "<<ss.getDiscount()<<endl;
								cout<<"\n\n\t\t\t The original : "<<ALL_prices<<" $ "<<endl;
								cout<<"\t\t\t All Prices   : "<<(ALL_prices-ss.getDiscount())<<" $ "<<endl;
								cout<<"\t\t\t Get all the money ......... ";
								if((ALL_prices-ss.getDiscount())!=0){
									cin>>price;
								}
								if(price<(ALL_prices-ss.getDiscount())){
									cout<<"\t\t\t <-- Not Enough Money --> Get all the money .....";
									if((ALL_prices-ss.getDiscount())!=0){
										cin>>price;
									}
								}
							}while(price<(ALL_prices-ss.getDiscount()) && (ALL_prices-ss.getDiscount())!=0);
							cout<<"\n\t\t\t  --> withdraw <--"<<endl;
							w1.Medal((price-(ALL_prices-ss.getDiscount())));
						}
					}else{
						do{
							system("clear");
							w1.print();
							cout<<"\n\n\t\t\t All Prices : "<<ALL_prices<<" $ "<<endl;
							cout<<"\t\t\t Get all the money ......... ";
							if(ALL_prices!=0){
								cin>>price;
							}
							if(price<ALL_prices){
								cout<<"\t\t\t <-- Not Enough Money --> Get all the money .....";
								if(ALL_prices!=0){
									cin>>price;
								}
							}
						}while(price<ALL_prices  && ALL_prices!=0);
						cout<<"\n\t\t\t  --> withdraw <--"<<endl;
						w1.Medal(price-ALL_prices);
					}
					w1.setnumbev();
					cout<<"\n\n\n\n\n\t\t\t\t   Exit = 1     <==>     Next = 2  \n";
					cin>>exit2;
				}while(exit2!=1);
				break;
			case 3:  cout<<"\n\n\n\t\t\t\t\t\t = = =  Goog bye  = = =\n\n"; 
				 break;
		}

	}while(nummenu!=3);             















}
