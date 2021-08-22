     /*
       Program name: ex09.c   
       student: 59160668 Nitichai Sawangsai
       section:04
     */
   #include <stdio.h>
   int main (void)
 { 
   int y = 2* (3+5)/(5+4)*2;
   int x = 2*3+5/5+4*2; 
   int b = x*=y-4;
   int z = x+=x++*3+1*++y; 
    x+=y-=z*=3;
    printf("b is:%d\n",b);
    printf("y is:%d\n",y);
    printf("x is:%d\n",x);
    printf("z is:%d\n",z);
     
   
    return 0;
 }  // main
