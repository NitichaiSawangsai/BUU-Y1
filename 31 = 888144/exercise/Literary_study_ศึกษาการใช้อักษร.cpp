using namespace std;
#include <iostream>
bool A_E_I_O_U (char ch){
	if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u'){
		cout<<"****  Vowel *****";
	}else{
		cout<<"**** No Vowel ****";
	}
	return ch;
}

int main () {
	char ch;
	cin>>ch;
	A_E_I_O_U(ch);
        cout<<endl;
	return 0;
}//main


