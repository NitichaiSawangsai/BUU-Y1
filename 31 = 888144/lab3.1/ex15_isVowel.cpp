using namespace std;
#include <iostream>
bool isVowel (char ch){
	if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u'){
             ch=true;
	}else{
             ch=false;
	}  
	return ch;
}

int main () {
	char ch;
	cin>>ch;
	isVowel(ch);
        if((isVowel(ch))== true){
		cout<<"****  Vowel *****";
        }else{
		cout<<"**** No Vowel ****";
        }//else isVowel
        cout<<endl;
	return 0;
}//main


