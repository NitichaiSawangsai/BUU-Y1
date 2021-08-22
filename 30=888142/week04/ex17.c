/*Program name: ex17.c
   student: 59160668 Nitichai Sawangsai
   section:04
   */
  
   #include<stdio.h>
   int main (void){
   int aom , aom1 , aom2 ;
   int  za0 , za1 , za2 , za3 ;
  
     printf("Please enter two integer numbers : \n");
     scanf ( "%d%d",&aom,&aom1);
   
       //แสดง
     printf(" * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
     printf(" *                                                                                   * \n");
     printf(" *                                    M E N U                                        * \n");
     printf(" *                                                                                   * \n");
     printf(" *   1. ADD                                                                          * \n");
     printf(" *   2. SUBTRACT                                                                     * \n");
     printf(" *   3. MULTIPLY                                                                     * \n");
     printf(" *   4. MODOLO                                                                       * \n");
     printf(" *                                                                                   * \n");
     printf(" * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
    
    printf("Please Type Your Choice And Key Return : ");
    scanf("%d",&aom2);

    za0 = aom + aom1;
    za1 = aom - aom1;
    za2 = aom * aom1;
    za3 = aom % aom1;
     
     switch(aom2)
{ 
        case 1 : printf("%d + %d = %d\n",aom,aom1,za0);
	break;
	case 2 : printf("%d - %d = %d\n",aom,aom1,za1);
	break ;
	case 3 : printf("%d * %d = %d\n",aom,aom1,za2);
	break ;
	case 4 : printf("%d mod %d = %d\n",aom,aom1,za3);
	break ;
	default : printf("Return\n");

}
return 0;
}

