      
     	/*Program name: ex07.c
       student: 59160668 Nitichai Sawangsai
       section:04 
     */
  	  
   #include<stdio.h>
   int main (int argc,char*argv[]) 
 {
     int  i =0 ;
     for (i=0;i<10;++i) {
     if (i==2) { 
     continue;
    }
      if(i==7)  {
      break;
    }  
      printf("Now i = %d\n",i);
    }   
   	return 0;     
 }   // aomza
