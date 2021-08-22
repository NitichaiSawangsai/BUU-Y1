#include <termios.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>
int getch(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}
void SVI();
void SVN();
void SVC();
void OPSAVE();
float sql(int qq);
char home[2400];
void pain()
{
	int H=0,GOOD=0,x=0,i,in_count_Enter=0,b,Q=1,c,deley_check_coice=0;
	int m1=0,m2=0,count_good=1,check_good=0,save=0,auto_save=0;;
	float good=0;
	char check_coice,copy[2400];
	//printf("\n\n");	
	while(1)
	{
		int count_Enter=0;
		LOOP1:
		if(Q==1)
		{
			b=61;
			Q=2;
		}
		//home[c]=0;
		home[b]=3;
		printf("\n");
		system("clear");
		c=b;
		printf("  %d  \n\n",c);
		in_count_Enter=-1;
		for(i=0;i<2400;i++)
		{
			if(count_Enter==60)
			{
				in_count_Enter++;
				if(in_count_Enter<=40)
				{
					if(in_count_Enter==1)
					{
						printf("  Enter = Write");
						//if(in_count_Enter==count_good)
							//printf("   %d & %d = %.1f",m1,m2,good);
						
					}
					else if(in_count_Enter==2)
					{
						printf("  Enter  = Closes");
						//if(in_count_Enter==count_good)
							//printf("   %d & %d = %.1f",m1,m2,good);
					}
					else if(in_count_Enter==3)
					{
						printf("  s  = save");
						//if(in_count_Enter==count_good)
							//printf("   %d & %d = %.1f",m1,m2,good);
					}
					else if(in_count_Enter==4)
					{
						printf("  S = save and exit");
						//if(in_count_Enter==count_good)
							//printf("   %d & %d = %.1f",m1,m2,good);
					}
					else if(in_count_Enter==25)
					{
						if(save>=2)
							printf("Auto Save Complete! ");
					}
					else if(in_count_Enter==30)
					{
						if(save==1)
							printf(" Save Complete! ");
					}
					else if(in_count_Enter==6)
					{
						//printf("  S = save and exit");
						//if(in_count_Enter==count_good)
							printf("   ANS  = %.1f",good);
					}
					else if(in_count_Enter==count_good)// check bun tad
					{
						//printf("  \t %d & %d = %.1f",m1,m2,good);
					}		
				}
				printf("\n");
				count_Enter=0;
				
				
			}
			count_Enter++;
			if(home[i]==0)
				printf(" ");
			else if(home[i]==1)
				printf("*");
			else if(home[i]==3)
				printf("|");
			else
				printf("%c",home[i]);
			
		}
		//in_count_Enter=-1;
		c=b;
		home[c]=0;
		int b2;
		if(save>=2)
		{
			save++;
			if(save>15)
				save=0;
		}
		if(save==1)
			save=0;
		if(b2!=659)
			b+=b2=control();
		if(b2==659)
		{
			char O;
			b=c;
			O=getch();
			b+=1;
			if(O==10 || O==65 || O==66 || O==67 || O==68 || O==27 || O==91)
			{
				b2=0;
			}
			else
			{
				home[c]=O;
				auto_save++;
				if(auto_save==100)
				{
					SVI();
					auto_save=0;
					save=2;
				}
				if(O=='+')
				{
					GOOD=c;
					H=1;
	
				}
				else if(O=='-')
				{
					GOOD=c;
					H=2;
				
				}
				else if(O=='*')
				{
					GOOD=c;
					H=3;
			
				}
				else if(O=='/')
				{
					GOOD=c;
					H=4;
			
				}
				else if(O=='%')
				{
					GOOD=c;
					H=5;
			
				}
				else if(O=='t')
				{
					GOOD=c;
					if(home[GOOD-1]=='o' && home[GOOD-2]=='o' && home[GOOD-3=='r'])
					{
						H=6;
					}
				}
				if(O==127)
				{
					home[c]=0;
					home[c-1]=0;
					b-=2;
				}
				if(H==1)
				{
					float m;
					m1=home[GOOD-1];
					m2=home[GOOD+1];
					m1=Chnum(m1);
					m2=Chnum(m2);
					m=m1+m2;
					good=m;
					
				}
				else if(H==2)
				{
					float m;
					m1=home[GOOD-1];
					m2=home[GOOD+1];
					m1=Chnum(m1);
					m2=Chnum(m2);
					m=m1-m2;
					good=m;
				}	
				else if(H==3)
				{
					float m;
					m1=home[GOOD-1];
					m2=home[GOOD+1];
					m1=Chnum(m1);
					m2=Chnum(m2);
					m=m1*m2;
					good=m;
				}	
				else if(H==4)
				{
					float m;
					m1=home[GOOD-1];
					m2=home[GOOD+1];
					m1=Chnum(m1);
					m2=Chnum(m2);
					m=(float)m1/(float)m2;
					good=m;
				}	
				else if(H==5)
				{
					float m;
					m1=home[GOOD-1];
					m2=home[GOOD+1];
					m1=Chnum(m1);
					m2=Chnum(m2);
					m=m1%m2;
					good=m;
				}	
				else if(H==6)
				{
					float m;
					m1=home[GOOD-4];
					m1=Chnum(m1);
					m=sql(m1);
					good=m;
				}	
			}
			
			
		}
		else if(b2==661)
		{
			SVI();
			b=c;
			save=1;
		}
		else if(b2==662)
		{
			SVI();
			return;
		}
		else if(b2==660)
		{
			return;
		}
		else if(b2==60)
		{
			count_good++;
		}
		else if(b2==-60)
		{
			count_good--;
		}
		if(b%60==0 || b<=59)//gun top  and left 
			b=c;
		else if(b%60==59)
		{
			count_good++;
			b+=2;
		}
		if(b>=2340)
		{
			count_good=1;
			b=61;
		}
		
	
	}	
}
float sql(int qq)
{
	
	int ww=0,ee=0,rr=0,tt=1,i=1;
	float ee2,rr2;
	qq=qq*10000;
do
{
	ww=i*i;
	if(ww>qq)
	{
		ee2=ee*0.01;
		tt++;	
		return ee2;	
	}
	else if(ww>=qq)
	{	
		rr2=rr*0.01;
		tt++;
		return rr2;
	}
	else if(ww<qq)
	{
		ee=i;
		rr=i+1;	
	}
	i++;
}while(i>=1 && tt==1);
}

int control()
{
	int a=0;
	char CT;
	CT=getch();
	if(CT==65)
		a=-60;
	else if(CT==66)
		a=60;
	else if(CT==68)
		a=-1;
	else if(CT==67)
		a=1;
	else if(CT==10)
		a=659;
	else if(CT==127)
		a=660;
	else if(CT==115)
		a=661;
	else if(CT==83)
		a=662;
	
	return a;		
}
int Chnum(int O)
{
	int U;
	//printf("%d",O);
	if(O=='0')
		U=0;
	else if(O=='1')
		U=1;
	else if(O=='2')
		U=2;
	else if(O=='3')
		U=3;
	else if(O=='4')
		U=4;
	else if(O=='5')
		U=5;
	else if(O=='6')
		U=6;
	else if(O=='7')
		U=7;
	else if(O=='8')
		U=8;
	else if(O=='9')
		U=9;
	return U;
}
void SVC()
{
	FILE*myfile;
	int i;
	char j,ZZ[2400];

	for(i=0;i<2400;i++)
	{
		if(home[i]==0 || home[i]==1)
		{
			home[i]=' ';
		}
	}
	home[120]='\n';
	home[180]='\n';
	home[140]='\n';
	myfile=fopen("normal.txt","w");
	for(i=0;i<2400;i++)
	{
		fprintf(myfile,"%c",home[i]); //inpu to file
		if(i==120)
		{
			fprintf(myfile,"\n",home[i]); //inpu to file
		}
	}
	fclose(myfile);
	myfile=fopen("normal.txt","r");
	for(i=0;i<2400;i++)
	{
		fscanf(myfile,"%c",&ZZ[i]);  //aow file ma geb sai b[]
	}
	fclose(myfile);
//	printf("\n\n %d \n\n",i);
	return;

}
void SVI()
{
	FILE*myfile;
	int i,RR[2400];
	for(i=0;i<2400;i++)
	{
		RR[i]=home[i];
	}
	for(i=0;i<2400;i++)
	{
		if(RR[i]==0 || RR[i]==1)
		{
			RR[i]=' ';
		}
		if(i==120)
		{
			RR[i]='\n';
		}
	}

	myfile=fopen("outfile.txt","w");
	for(i=0;i<2400;i++)
	{
		fprintf(myfile,"%c",RR[i]); //inpu to file
	}
	fclose(myfile);

}
void SVN()
{
	FILE*myfile;
	int i;
	char j,ZZ[2400];

	for(i=0;i<2400;i++)
	{
		if(home[i]==0 || home[i]==1)
		{
			home[i]=' ';
		}
	}

	myfile=fopen("normal.txt","w");
	for(i=0;i<2400;i++)
	{
		fprintf(myfile,"%c",home[i]); //inpu to file
	}
	fclose(myfile);
	myfile=fopen("normal.txt","r");
	for(i=0;i<2400;i++)
	{
		fscanf(myfile,"%c",&ZZ[i]);  //aow file ma geb sai b[]
	}
	fclose(myfile);
	myfile=fopen("normal.txt","w");
	for(i=0;i<2400;i++)
	{
		fprintf(myfile,"%c",ZZ[i]); //inpu to file
	}
	fclose(myfile);
	for(i=0;i<2400;i++)
	{
		printf("%c",ZZ[i]);  //sdang b[]
		if(i%60==0)
		{
			printf("\n");
		}
	}

	return;
}
void OPS()
{
	FILE*myfile;
	int i;
	myfile=fopen("outfile.txt","r");
	for(i=0;i<2400;i++)
	{
		fscanf(myfile,"%c",&home[i]);  //aow file ma geb sai b[]
	}
	fclose(myfile);	
	home[120]=' ';	
	for(i=0;i<2400;i++)
	{
		if(home[i]==' ')
		{
			home[i]=0;
		}
		if(i%60==0 || i%60==59)
		{
			home[i]=1;
		}
		if(i<60 || i>=2340)
		{
			home[i]=1;	
		}
	}
}
void OPSAVE()
{
	FILE*myfile;
	int i;
	char tx;
	myfile=fopen("save_name.txt","r");
	while(i!=EOF)
	{
		fprintf(stdout,"%c",tx);
		i=fscanf(myfile,"%c",&tx); //inpu to file
		//printf("%c",tx);
	}
	fclose(myfile);
	getch();	
	return;

}
void start()
{
	FILE*myfile;
	char name[20],check_name[20];
	int result,c_n=-1;
	system("clear");

	
	printf("\n\tUser Name : ");
	scanf("%s",name);
	myfile=fopen("save_name.txt","a");
	fprintf(myfile,"%s",name); //inpu to file
	fprintf(myfile,"\n"); //inpu to file
	fclose(myfile);

	/*myfile=fopen("save_name.txt","r");
	result=fscanf(myfile,"%c",&check_name);
	while(result!=EOF)
	{
		
		result=fscanf(myfile,"%c",&check_name);  //aow file ma geb sai b[]
		printf("%c",check_name);
		if(check_name=='\n')
		{
			c_n++;
		}
	}
	fclose(myfile);
	//printf("\n\n TTT : %d\n\n",c_n);
	//scanf("%d",&c_n);*/
	return;

}
void pick()
{

	char s,a[]={'<',' ',' ',' '};
	int i,aa,bb;
	while(1)
	{
		if(bb>2)
		{
			bb=3;
			a[bb]='<';
		}
		else if(bb<0)
		{
			bb=0;		
			a[bb]='<';
		}
		printf("\n\n");	
		system("clear");
		printf("\n\n");	
		printf("\n\tCreate New account : %c ",a[0]);
		printf("\n\t : %c ",a[0]);
		printf("\n\tExit       : %c ",a[3]);
		printf("\n\n");
		s=getch();
		if(s==65)
		{	
			aa=bb;
			a[aa]=' ';
			bb=bb-1;
			a[bb]='<';
			
		}		
		else if(s==66)
		{
			aa=bb;
			a[aa]=' ';
			bb=bb+1;
			a[bb]='<';				
		}
		else if(s==10)
		{
			if(a[0]=='<')
			{
				
			}
			else if(a[1]=='<')
			{
	
			}
			else if(a[2]=='<')
			{
				break;
			}
		}	
	}
}
int main()
{
	char cc,aa[]={'<',' ',' ',' ',' ',' ',' ',' '};
	int w=0,s,i,PS=0;
	for(i=0;i<2400;i++)
	{
		home[i]=0;
		if(i%60==0 || i%60==59)
		{
			home[i]=1;
		}
		if(i<60 || i>=2340)
		{
			home[i]=1;	
		}
	}
	//void CHK(void);
	int  CHK(int w)
	{
		if (w==-1)
		{
			w=0;	
		}
		else if(w>7)
		{
			w=7;
		}
		else{}
		return w;
	}
	while(1)
	{	
		system("clear");
		printf("\t\t\n   PROGRAM VI 2.0     \n");
		printf("\t\t\nVI ver 2.0       : %c",aa[0]);
		printf("\t\t\nSave for C       : %c",aa[1]);
		printf("\t\t\nOpen file        : %c",aa[2]);
		printf("\t\t\nRecord Access    : %c",aa[3]);
		printf("\t\t\n----------       : %c",aa[4]);
		printf("\t\t\n----------       : %c",aa[5]);
		printf("\t\t\n----------       : %c",aa[6]);
		printf("\t\t\nExit..           : %c\n",aa[7]);
		cc=getch();
		if(cc==66)
		{
			s=w;
			aa[s]=' ';
			w+=1;
			w=CHK(w);
			aa[w]='<';
		}
		else if(cc==65)
		{
			s=w;
			aa[s]=' ';
			w-=1;
			w=CHK(w);
			aa[w]='<';
		}
		else if(cc==10)
		{
			if(aa[0]=='<')
			{
				if(PS!=1)
				{
					start();
					PS=1;
				}
				pain();
			
			}
			else if (aa[1]=='<'){system("clear");SVC();system("make");printf("\n SAVE COMPLETE.. \n\n");return 0;}
			else if (aa[2]=='<'){OPS();}
			else if (aa[3]=='<'){OPSAVE();}
			else if (aa[4]=='<'){}
			else if (aa[5]=='<'){}
			else if (aa[6]=='<'){}
			else if (aa[7]=='<'){return 0;}
		}
		else {}
	}
	

}
