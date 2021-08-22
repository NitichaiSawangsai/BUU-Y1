/* Program name: nisit.c
   Student:59160668 
   Nitichai Sawangsai
   section:04
*/
    #include "nisit.h"
    int main(int argc, char*argv[]) {
      struct student nisit[10000];
      int i=0;
      int Menu=0;
      int num;
      int numid[10000];
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
                                 printf("Please enter Student name [%d]: ",i+1);
                                  scanf("%s",&nisit[i].fname);
                                 printf("             Student name [%d]: ",i+1);
                                  scanf("%s",&nisit[i].sname);
                                 printf("             Student ID   [%d]: ",i+1);
                                  scanf("%d",&numid[i]);
                                 printf("             Student age  [%d]: ",i+1);
                                  scanf("%d",&nisit[i].age);
                                 printf("             Student GPA  [%d]: ",i+1);
                                  scanf("%f",&nisit[i].gpa);i++;
             	                 printf("\nNEXT sudent? (yes/no) : ");
                                  scanf("%s",&ans);
  	                         printf("\n");
                               }while(strcmp(ans,"yes") == 0 );
                           break;


        case 2:
                do {
                     printf("\n\t\t ID : ");
                     scanf("%d",&num);
                      for(i=0;i<10;i++){
                       if(numid[i]==num) {
                          num =i+1;
                      }//if numid[i]==num
                     }//for i                     
                   for(i=(num-1);i<num;i++) { 
                     printf("\n**********************************************************\n");
                     printf("    Please enter student Name : %s\n  ",nisit[i].fname);
                     printf("  Please enter student Name : %s\n  ",nisit[i].sname);
                     printf("                        ID  : %d\n  ",numid[i]);
                     printf("                        Age : %d\n  ",nisit[i].age);
                     printf("                        GPA :%5.2f\n",nisit[i].gpa);
                     printf("\n**********************************************************\n");
                     printf("\n\n");
             	     printf("\nNEXT sudent? (yes/no) : ");
                     scanf("%s",&ans);
                    }//for i
                   }while(strcmp(ans,"yes") == 0 );  
              break;
            }//switch(Menu)    
           }while(Menu!=3);

    return 0;
    }//main 
