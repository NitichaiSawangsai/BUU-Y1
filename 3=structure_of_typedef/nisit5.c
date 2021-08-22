/* Program name: nisit.c
   Student:59160668 
   Nitichai Sawangsai
   section:04
*/
    #include <stdio.h>
    #include <string.h>
    char ans[3];
    struct student {
         char* fname[30];
         char* sname[30];
         int age,id;
         float gpa;
    }; // struct  of student

    int main(int argc, char*argv[]) {
      struct student nisit[10000];
      int i=0;
      int Menu=0;
      int num;
      char *ID;
      strcpy(ans,"yes");
                   
        do {
         system("clear");
         printf("\n\n\n\n");
              printf("\t\t\t\t\t 1. Please Profile  \n");
              printf("\t\t\t\t\t 2. Search Profile  \n");
              printf("\t\t\t\t\t 3. Exit            \n");
              
               printf("\n\n");
               printf("\t\t\tMenu : ");
               scanf("%d",&Menu);        
                
               switch(Menu) {   
                    case 1:
                            do {
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
                     printf("\n\t\t ID : ");
                     scanf("%s",ID);
                    FILE *fp = fopen(ID, "r");
                      char thetext;
                      int result;
                         result=fscanf(fp,"%c",&thetext);
                         while(result!=EOF) {
                         fprintf(stdout,"%c",thetext);
                         result=fscanf(fp,"%c",&thetext);
                         }//while
                     fclose(fp);
             	     printf("\nNEXT sudent? (yes/no) : ");
                     scanf("%s",&ans);
                   }while(strcmp(ans,"yes") == 0 );  
              break;
            }//switch(Menu)    
           }while(Menu!=3);

    return 0;
    }//main 
