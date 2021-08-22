#include <stdio.h>
#include <unistd.h>   
#include <termios.h>
struct Picture {
	char Picture_Data[300];
};struct Picture  Data[1000];
void Picture_r ();
int main(int argc,char*argv[]) {
   Picture_r();
	return 0;
}//main
void Picture_r (){
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
    for(i=0;i<=26;i++){
      system("clear");
      printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t----------------------------\n");       
      printf("\t\t\t\t|%s\n",Data[i].Picture_Data);        
      printf("\t\t\t\t----------------------------\n\n\n");       
      sleep(1);
    }//for i
}//Picture_r
