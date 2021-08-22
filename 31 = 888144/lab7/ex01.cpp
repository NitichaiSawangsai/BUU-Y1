#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
class ArrayList {
	private:
		int list[10];
		int length;
		int maxSize;
	public :
		ArrayList(){
                        for(int i=0;i<10;i++){
			list[i]=0.000;
                        }//for i
			length=0;
			maxSize=10;
		}

		bool  isEmptyList(){
                     if(length==0){
                        return true;
                     }else{
                        return false;
                     }//if
                       
                /*  int y=0;
                     for(int i=0;i<10;i++){
                       if(list[i]==0.000){
                           y++; 
                       }//if
                     }//for i
                     if(y==maxSize){
                        return 1;
                     }else{
                        return 0;
                     }//if
                 */
                }//isEmptyList

		bool isFullList(){
                  int y=0;
                     for(int i=0;i<10;i++){
                       if(list[i]!=0.000){
                           y++; 
                       }//if
                     }//for i
                     if(y<maxSize){
                        return false;
                     }else{
                        return true;
                     }//if
                }
 
	    	int search(int searchltem){
                     int u=0;
                     for(int i=0;i<10;i++){
                         if(list[i]==searchltem){
                             u=i;
                         }
                     }//for i
                         if(u!=0){
                             return u;
                         }else{ 
                             return -1;
                         }
                }
   	        void insert(int insertltem){
                    list[length]=insertltem;
                    length++;
                }
		void print(){
                     for(int i=0;i<10;i++){
                         cout<<"list ["<<i<<"] = "<<list[i]<<endl; 
                     }//for i
                }
                void remove(int removeltem){
                     for(int i=0;i<10;i++){ 
                        if(list[i]==removeltem){
                           list[i]=list[i+1];
                           list[i+1]=0;        
                        }
                     }
                      length--;
                }
};
int main() {
	ArrayList myarr;

	cout << "Init ArrayList" << endl;
	myarr.print();
/*
        myarr.insert(0);
	if(myarr.isEmptyList()){
		cout << "arraylist is empty" << endl;
	}
*/       

	cout << "Try to check arraylist is empty" << endl;
	if(myarr.isEmptyList()){
		cout << "arraylist is empty" << endl;
	}

	cout << "Insert number 5 to arraylist" << endl;
	myarr.insert(5);
	myarr.print();

	cout << "Insert number 8 and 2 to arraylist" << endl;
	myarr.insert(8);
	myarr.insert(2);
	myarr.print();

	cout << "Try to find number 8 is in arraylist" << endl;
	int index = myarr.search(8);
	if(index == -1){
		cout << "Oh, number 8 is not in arraylist" << endl;
	}else{
		cout << "OK, number 8 at position " << index << " in arraylist" << endl;
		myarr.print();
	}


	cout << "Try to find number 7 is in arraylist" << endl;
	index = myarr.search(7);
	if(index == -1){
		cout << "Oh no, number 7 is not in arraylist" << endl;
	}else{
		cout << "OK, number 7 at position " << index << " in arraylist" << endl;
		myarr.print();
	}

	cout << "Try to remove number 8 from arraylist" << endl;
	myarr.remove(8);
	myarr.print();

	cout << "last check method isfullList" << endl;
	for(int i = 0 ; i < 10; i++){
		if(!myarr.isFullList()){
			myarr.insert(i);
		}else{
			myarr.print();
			cout << "Can't insert item to list." << endl;
		}
	}

	return 0;
}//end main 
