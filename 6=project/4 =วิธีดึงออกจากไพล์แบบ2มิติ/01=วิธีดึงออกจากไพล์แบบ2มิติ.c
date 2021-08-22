 //t1.c 
 #include <stdio.h>
 #include <string.h>
  char user[30],pass[30];
  typedef struct{
          char user[30];
          char pass[30];
          char money[30];
  }User;
 User Member[99];

 int main(int argc, char*argv[]) { 
          char text;
          int result;
          int l=0,i=0,row=1;
          FILE *DATA;
          
          DATA = fopen("DATA1.txt","r");
          result = fscanf(DATA,"%c",&text);
          while(result != EOF){
                  if(text == '~'){
                          row++;
                          l=0;
                          if(row>=4){
                                  row=1;
                                  i++;
                          }//if row>=4
                  }//if text == ~
                  else if(row == 1 && text!= '\n'){
                          Member[i].user[l]= text;
                          l++;
                  }
                  else if(row == 2){
                          Member[i].pass[l] = text;
                          l++;
                  }
                  else if(row == 3){
                          Member[i].money[l] = text;
                          l++;
                  }
                  result = fscanf(DATA,"%c",&text);
          }
          fclose(DATA);
          for(i=0;i<10;i++){
            printf("A[%d] :%s %s\n",i,Member[i].user,Member[i].pass);
          }
 return 0;
 }//main

