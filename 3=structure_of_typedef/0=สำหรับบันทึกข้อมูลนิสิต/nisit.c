 #include "nisit.h"
  int main(int argc, char*argv[]) {
      FILE*spTemps;
      struct student nisit[10000];
      int num;
      int Menu=0,i=0;
      char ID[20];
      char *fine;
      strcpy(ans,"yes");
                   
        do {
         system("clear");
         printf("\n\n\n\n");

                     fine="welcome.txt";
                     Fine_r(fine);
              printf("\t\t\t\t\t 1. Please Profile  \n");
              printf("\t\t\t\t\t 2. Search Profile  \n");
              printf("\t\t\t\t\t 3. Exit            \n");
              
               printf("\n\n");
               printf("\t\t\tMenu : ");
               scanf("%d",&Menu);        
                
               switch(Menu) {   
                    case 1:system("clear");
                            do {
                                 fine="Student.txt";
                                 Fine_r(fine);
                                 printf("             Student ID   [%d]: ",i+1);
                                 scanf("%s",ID);
                                 FILE *fp = fopen(ID, "w");
                                 printf("Please enter Student name [%d]: ",i+1);
                                  scanf("%s",&nisit[i].fname);
                                 printf("        Student lase name [%d]: ",i+1);
                                  scanf("%s",&nisit[i].sname);
                                 printf("             Student age  [%d]: ",i+1);
                                  scanf("%d",&nisit[i].age);
                                 printf("             Student GPA  [%d]: ",i+1);
                                  scanf("%f",&nisit[i].gpa);

                                 fprintf(fp,"      Student name : %s\n ",nisit[i].fname);
                                 fprintf(fp,"Student lase name : %s\n",nisit[i].sname);
                                 fprintf(fp,"        Student ID : %s\n",ID);
                                 fprintf(fp,"       Student age : %d\n",nisit[i].age);
                                 fprintf(fp,"       Student GPA : %2.2f\n",nisit[i].gpa);
                                 i++;
                                 fclose(fp);
             	                 printf("\nNEXT sudent? (yes/no) : ");
                                  scanf("%s",&ans);
  	                         printf("\n");
                               }while(strcmp(ans,"yes") == 0 );
                           break;


        case 2:
                do {
                 system("clear");
                 fine="show.txt";
                 Fine_r(fine);     
		   do{
                     printf("\n\t\t ID : ");
                     scanf("%s",ID);
                     fine=ID;
                      if((spTemps = fopen(ID,"r"))==NULL) { 
                         system("clear");
                         fine="ERROR.txt";
                         Fine_r(fine);     
                         printf("\a\n\n\t\t\t +++++++++++   ERROR opening   File : %s ++++++++++\n",ID);
                      }//if open
	            }while(spTemps == NULL);
                     printf("\n");
                     Fine_r(fine);
             	     printf("\nNEXT sudent? (yes/no) : ");
                     scanf("%s",&ans);
                 }while(strcmp(ans,"yes") == 0 );  
                 fclose(spTemps);
              break;
            }//switch(Menu) 
            if(Menu==3) {  
               system("clear");
               fine="thank.txt";
               Fine_r(fine);
            }//Menu==3
           }while(Menu!=3);
    return 0;
    }//main 
