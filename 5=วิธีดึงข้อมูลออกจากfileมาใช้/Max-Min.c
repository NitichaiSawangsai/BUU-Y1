#include<stdio.h>
int main(){
	int numN, i, choice, max=0, min=0;
	int Max=0,Min=0;
	float average, sum;
	printf("enter your amount : ");
	scanf("%d",&numN);
	int num[numN];
	//FILE *Numfile;
	//       Numfile = fopen("num.txt","a");
	//	for(i = 0;i < numN; i++){
	//		printf("Enter num[%d]", i+1);
	//		scanf("%d", &num[i]);
	//		fprintf(Numfile,"%d",num[i]);
	//	}
	//fclose(Numfile); 
	printf(" MENU\n");
	printf("1. MAX\n");
	printf("2. MIN\n");
	printf("3. EXIT\n");


	FILE*in,*out;
	int thetext[10];
	int result;
	int aom[10];

	in  = fopen("num.txt","r");
	for (i=0;i<=10;i++) {
		result = fscanf(in,"%d",&thetext[i]);
	}
	while(result!=EOF) 
	{
		for (i=0;i<=10;i++) {
			result = fscanf(in,"%d",&thetext[i]);
		}
	}//while(result!=EOF)
	fclose(in);
	for (i=0;i<=20;i++) {
		printf(" %d : ",thetext[i]);
		aom[i]=thetext[i];
	}// for i
	do{
		printf("Enter your choice : ");
		scanf("%d", &choice);
		if(choice == 1){
			for(i = 0;i < 5; i++){
				if(i == 0){
					max=num[0];
					Max=aom[0];
				}
				if(num[i] > max){
					max = num[i];
					Max=aom[i];     
				}
			}
			printf("max  = %d\n", max);
			printf("AOM Max : %d\n",Max);
		}
		if(choice == 2){
			for(i = 0;i < numN; i++){
				if(i == 0){
					min = num[0];
					Min=aom[i];
				}
				if(num[i] < min){
					min = num[i];
					Min=aom[i];
				}
			}
			printf("min  = %d\n", min);
			printf("AOM MIN  = %d\n", Min);
		}

	}while(choice != 3);

	return 0;
}
