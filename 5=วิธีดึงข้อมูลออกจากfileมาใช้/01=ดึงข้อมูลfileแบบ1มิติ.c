#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <stdio.h>
int main(int argc, char*argv[]) {
	FILE*myfile;
	int thetext;
	int result,i=0;
	int number[100]={0};
	myfile = fopen("num1.txt","r");
	result = fscanf(myfile,"%d",&thetext);
	while(result!=EOF) {
		if(thetext=='\t'){
			i++;
		}//if
		else {
			number[i]=thetext;
			i++;
		}//else if (thetest=='\t')
		result = fscanf(myfile,"%d",&thetext);
	}//while(result!=EOF)
	fclose(myfile); 
	for(i=0;i<=20;i++) {
		printf("a[%d]: %d\n",i,number[i]);
	}//for i
	return 0;
}//main 
