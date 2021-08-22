      
     /*Program name: ex08.c
       student: 59160668 Nitichai Sawangsai
       section:04 
     */
    
    #include<stdio.h>
    int main (int arg,char * argv[]) 
  {
    
    int fnum,snum ;
      printf("\n Please enter two integers :");
       scanf("%d%d",&fnum,&snum);
 
    

     if(fnum < snum ) 
 {
       printf("%d LT %d\n",fnum,snum);
 }
     else if (fnum == snum)
 { 
       printf("%d EQ %d\n",fnum,snum);
 }
     else 
 { 
       printf("%d GT %d\n",fnum,snum);
 }
     
  
   
      return 0;
 }  // aomza
