#include <iostream>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;
class DBLinkedList{
	private :
		class Node{
			public :
				string id;
				string prefix;
				string fname;
				string lname;
				string nname;
				string tel;
				string gpa;
				Node *link;
				Node *plink;

				Node(string id,string prefix,string fname,string lname,string nname,string tel,string gpa){
					this->id = id;
					this->prefix = prefix;
					this->fname = fname;
					this->lname = lname;
					this->nname = nname;
					this->tel = tel;
					this->gpa = gpa;
					link = NULL;
					plink = NULL;
				}

		};

		Node *head;
		Node *tail;
		int count;

	public : 
		DBLinkedList(){
			head = NULL;
			tail = NULL;
			count = 0;
		}

		~DBLinkedList(){
			for(int i = 1; i < this->count; i++){
				Node * tmp = this->head;
				this->head = this->head->link;
				delete tmp;
				tmp = NULL;
			}
			this->head = NULL;
			this->tail = NULL;

		}

		void add(string id,string prefix,string fname,string lname,string nname,string tel,string gpa){
			Node *newNode = new Node(id,prefix,fname,lname,nname,tel,gpa);
			if(isEmpty()){
				head = newNode;
				tail = newNode;
			}else{
				tail->link = newNode;
				newNode->plink = tail;
				tail = newNode;
			}
			count++;
		}


		void show(){
			if(isEmpty()){
				cout << "No Data !!!.";
			}else{
				for(Node *temp = head;temp != NULL;temp = temp->link){
					cout << temp->id << " " ;
					cout << temp->prefix << " " ;
					cout << temp->fname << " " ;
					cout << temp->lname << " " ;
					cout << temp->nname << " " ;
					cout << temp->tel << " " ;
					cout << temp->gpa << " " <<endl;
				}
			}
			cout << endl;
		}
		/*void remove(int value){
		  int round=1;
		  Node *ptemp;
		  for(Node *temp = head;temp != NULL;temp = temp->link){
		  if(round == 1){
		  ptemp = temp;
		  if(temp->data == value){
		  if(temp == head && temp == tail){
		  delete temp;
		  head = NULL;
		  tail = NULL;
		  }else if(temp == head){
		  head = head->link;
		  head->plink = NULL;
		  delete temp;
		  }
		  count--;
		  break;
		  }
		  }else{
		  if(temp->data == value){
		  ptemp = temp->plink;
		  if(temp == tail){
		  tail = ptemp;
		  tail->link = NULL;
		  delete temp;
		  }else{
		  ptemp->link = temp->link;
		  temp->link->plink = ptemp;
		  delete temp;
		  }
		  count--;
		  break;
		  }
		  }
		  round++;
		  }

		  }*/

		bool find(string value){
			for(Node *temp = head;temp != NULL;temp = temp->link){
				if(temp->id == value){
					cout << temp->id <<" " ;
					cout << temp->prefix << " " ;
					cout << temp->fname << " " ;
					cout << temp->lname << " " ;
					cout << temp->nname << " " ;
					cout << temp->tel << " " ;
					cout << temp->gpa << " " <<endl;
					return true;
				}
				if(temp->prefix == value){
					cout << temp->id <<" " ;
					cout << temp->prefix << " " ;
					cout << temp->fname << " " ;
					cout << temp->lname << " " ;
					cout << temp->nname << " " ;
					cout << temp->tel << " " ;
					cout << temp->gpa << " " <<endl;
					return true;
				}
				if(temp->fname == value){
					cout << temp->id <<" " ;
					cout << temp->prefix << " " ;
					cout << temp->fname << " " ;
					cout << temp->lname << " " ;
					cout << temp->nname << " " ;
					cout << temp->tel << " " ;
					cout << temp->gpa << " " <<endl;
					return true;
				}
				if(temp->lname == value){
					cout << temp->id <<" " ;
					cout << temp->prefix << " " ;
					cout << temp->fname << " " ;
					cout << temp->lname << " " ;
					cout << temp->nname << " " ;
					cout << temp->tel << " " ;
					cout << temp->gpa << " " <<endl;
					return true;
				}
				if(temp->nname == value){
					cout << temp->id <<" " ;
					cout << temp->prefix << " " ;
					cout << temp->fname << " " ;
					cout << temp->lname << " " ;
					cout << temp->nname << " " ;
					cout << temp->tel << " " ;
					cout << temp->gpa << " " <<endl;
					return true;
				}
				if(temp->tel == value){
					cout << temp->id <<" " ;
					cout << temp->prefix << " " ;
					cout << temp->fname << " " ;
					cout << temp->lname << " " ;
					cout << temp->nname << " " ;
					cout << temp->tel << " " ;
					cout << temp->gpa << " " <<endl;
					return true;
				}
				if(temp->gpa == value){
					cout << temp->id <<" " ;
					cout << temp->prefix << " " ;
					cout << temp->fname << " " ;
					cout << temp->lname << " " ;
					cout << temp->nname << " " ;
					cout << temp->tel << " " ;
					cout << temp->gpa << " " <<endl;
					return true;
				}
			}
			cout <<" Not Found ...!!" << endl; 
			return false;
		}

		/*int get(int index){
		  if(isEmpty()){
		  cout << "No Data ...!" << endl;
		  }else{
		  if(index > 0 && index <= size()){
		  Node *temp = head;
		  for(int i=1;i<index;i++){
		  temp = temp->link;
		  }
		  return temp->data;
		  }
		  }
		  }

		  void set(int index,int data){
		  if(isEmpty()){
		  cout << "No Data ...!" << endl;
		  }else{
		  if(index > 0 && index <= size()){
		  Node *temp = head;
		  for(int i=1;i<index;i++){
		  temp = temp->link;
		  }
		  temp->data = data;
		  }else{
		  cout << "Out of Index " << endl;
		  }
		  }
		  }*/

		int size(){
			return count;
		}

		bool isEmpty(){
			if(count == 0)
				return true;
			else	
				return false;
		}
};


int main(){
	DBLinkedList list;
	int choice,num;
	string id,prefix,fname,lname,nname,tel,gpa,value;
	ofstream myfile("student.dat",ios::out|ios::app);
	ifstream readfile("student.dat",ios::in);
	myfile.open("student.dat");
                
        
	for(int i=0;i<100;i++){
	       readfile >> id >> prefix >> fname >> lname >> nname >> tel >> gpa;
		if(readfile==NULL){
			break;
		}else{
			list.add(id,prefix,fname,lname,nname,tel,gpa);
		}
	}


	do{
		cout << "1.Add" <<endl;
		cout << "2.Serch" << endl;
		cout << "3.Edit" << endl;
		cout << "4.Delete" << endl;
		cout << "5.Show" << endl;
		cout << "0.Exit" << endl;
		cout << "Enter number(0-5) :";
		cin >> choice;
		switch(choice){
			case 1 :
				cout << "Enter number Nisit : ";
				cin >> num;
				for(int i=0;i<num;i++){
					cout << "Please Enter information"<<endl;
					cout << "ID : " ;
					cin >> id;
					myfile<<id ;
					cout << "Prefix : ";
					cin >> prefix;
					myfile<<"	" << prefix;
					cout << "Firstname : ";
					cin >> fname;
					myfile<<"	" <<fname;
					cout << "Lastname : ";
					cin >> lname;
					myfile<<"	" <<lname;
					cout << "Nickname : ";
					cin >> nname;
					myfile<<"	" <<nname;
					cout << "Telephone number : ";
					cin >> tel;
					myfile<<"	" <<tel;
					cout << "GPA : ";
					cin >> gpa;
					myfile <<"	"<< gpa << endl;
					list.add(id,prefix,fname,lname,nname,tel,gpa);
				}	
				break;
			case 2 :
				cout << "Enter keyword : " ;
				cin >> value;
				list.find(value);
				break;
			case 3 :
				cout << endl;
				break;
			case 4 :
				cout << endl;
				break;
			case 5 :

				list.show();
				break;
			case 0 :
				choice=0;
				break;
			default :
				cout << "Tnput wrong number!" << endl;
		}
	}while(choice!=0);
}

