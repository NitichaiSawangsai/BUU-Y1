using namespace std;
#include <iostream>
int Filled_rectangle (int wide,int length){
   int end;
      wide=wide+wide;
      length=length+length;
      end = wide + length; 
 return end;
}

int main () {
	int end;
        int ans1,ans2;
        cin>>ans1>>ans2;
        end= Filled_rectangle(ans1,ans2);
        cout<<" Filled rectangle = "<<end<<endl; 
	return 0;
}//main
