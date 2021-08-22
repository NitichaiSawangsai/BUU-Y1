      
     /*Program name: ex02.c
       student: 59160668 Nitichai Sawangsai
       section:04 
     */
    
    #include<stdio.h>
    int main (int argc,char*argv[])
  {
    int var1,var2,var3;
    var1 = (5 >= 3);
    var2 = (3 == 3);
    var3 = (5 < 3 );
 
    printf("var1 = %d\n",var1);  
    printf("var2 = %d\n",var2);  
    printf("var3 = %d\n",var3);  
    printf("var1 and var2 = %d\n",var1 && var2);
    printf("var1 and var3 = %d\n",var1 && var3);
    printf("var1 or var2 = %d\n",var1 || var2);
    printf("var1 or var2 = %d\n",var1 || var3);
    

    return 0;
 }
   
   
