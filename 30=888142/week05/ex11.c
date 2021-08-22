     	 
     /*Program name: ex11.c
       student: 59160668 Nitichai Sawangsai
       section:04 
     */
  	  
   #include<stdio.h>
   int main (void) 
 {
     int  limit , lineCtrl ;
       printf("\n Please enter a number between 1 and 9 :  ");
        scanf("%d",&limit);
         for ( lineCtrl = 1; lineCtrl <= limit ; lineCtrl++ )  {
     int numCtrl ;
           for( numCtrl = 1; numCtrl <= lineCtrl ;numCtrl++)


       printf("%d",lineCtrl);
       printf("\n");
       
   } 
/*for lineCtrl แค่เปลี่ยน numCtel เป็น lineCtrl
ตัวเลขตอนแสดงก็จะเปลี่ยน
แบบ numCtel แสดง                   แบบ lineCtrl แสดง 
1                                  1
12                                 22 
123                                333
1234                               4444
12345                              55555\
*/

return 0;     
 }   // aomza
