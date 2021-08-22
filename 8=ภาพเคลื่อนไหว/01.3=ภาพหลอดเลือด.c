#include <stdio.h>
#include <unistd.h>   
#include <termios.h>
struct Picture {
	char Picture_Data[3000];
};struct Picture  Data[1000];
void Picture_r_n ();
void Picture_r_1  ();
int main(int argc,char*argv[]) {
	int i;
	Picture_r_n();
	for(i=0;i<=26;i++){
		system("clear");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n       ");
		printf("\t\t\t\t----------------------------\n     ");  
		printf("\t\t\t\t|%s\n",Data[i].Picture_Data);        
		printf("\t\t\t\t----------------------------\n\n\n ");       
		sleep(1);
	}//for i
	Picture_r_1();
	for(i=0;i<=13;i++){
		system("clear");
		printf("%s\n",Data[i].Picture_Data);        
		sleep(1);
	}//for i
	for(i=13;1<=i;i--){
		system("clear");
		printf("%s\n",Data[i].Picture_Data);        
		sleep(1);
	}//for i
	printf("%s\n",Data[14].Picture_Data);        
	return 0;
}//main
void Picture_r_n (){
	FILE*myfile;
	char thetext;
	int result;
	int j=0,i=0,row=1;
	myfile=fopen("a=Picture_หลอดเลือด.dat","r");
	result=fscanf(myfile,"%c",&thetext);
	while(result != EOF){
		if(thetext=='\n'){
			j=0;
			i++;
		}//if text == \n
		else if(row==1){
			Data[i].Picture_Data[j]=thetext;
			j++;
		}//else if row==1
		result = fscanf(myfile,"%c",&thetext);
	}// result != EOF
	fclose(myfile);
	return ;
}//Picture_r_\n
void Picture_r_1 (){
	FILE*myfile;
	char thetext;
	int result;
	int j=0,i=0,row=1;
	myfile=fopen("b=Picture_รวมรูปภาพ01.2.dat","r");
	result=fscanf(myfile,"%c",&thetext);
	while(result != EOF){
		if(thetext=='^'){
			j=0;
			i++;
		}//if text == \n
		else if(row==1){
			Data[i].Picture_Data[j]=thetext;
			j++;
		}//else if row==1
		result = fscanf(myfile,"%c",&thetext);
	}// result != EOF
	fclose(myfile);
	return ;
}//Picture_r
