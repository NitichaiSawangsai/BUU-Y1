 /*Program name: str01.c
   Student: 59160668
   Nitichai Sawangsai
   Section: 04
 */  
  #include "str01.h"
  int main (int argc,char *argv[]) {
    nisit class202[40];
    int i,count=1;
    char ans[3];
    strcpy(ans,"yes");
       do {
         printf("Enter student no.%d\n",count);

         printf("ID: ");
          scanf("%s",class202[count].id);
         printf("First Name:");
          scanf("%s",class202[count].fname);
         printf("Sur Name: ");
          scanf("%s",class202[count].sname);
         printf("GPA: ");
          scanf("%f",&class202[count].gpa);
         printf("year: ");
          scanf("%d",&class202[count].year);
         count++;
         printf("Next Student?");
          scanf("%s",ans);
       }while(strcpy(ans,"yes")==0);
         for(i=1;i<count;i++) {
          printf("Data of student no. %d\n",i);
          printf(" ID: %s\n FirstName: %s\n Surname: %s\n GPA: %5.2f\n Year: %d\n",class202[i].id,class202[i].fname,  class202[i].sname,class202[i].gpa,class202[i].year);
         }//for i
   return 0;
  }//main
