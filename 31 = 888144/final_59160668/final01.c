
    /* Program name: final01.c
       Student:59160668 \
       Nitichai Sawangsai
       section:04
    */
    #include <stdio.h>
    int main(int argc, char*argv[]) {
     int y,total=0,size;
        printf(" Input Size of Number : ");
        scanf("%d",&size);
      int arr[size];
         for(y=0;y<size;y++){
            printf("Input y [%d]: ",y+1);
            scanf("%d",&arr[y]);
         }//for y
         for(y=0;y<size;y++){
          total=total+arr[y]; 
         }//for y
       printf("arr[] :%d",arr[0]);
       printf("arr[1] :%d",arr[1]);
       printf("arr[1] :%d",arr[2]);
       printf("arr[1] :%d",arr[3]);
       printf("Total : %d\n",total); 
    return 0;
    }//main 
