#include<stdio.h> 
#include<conio.h>
#include<string.h>
#include<math.h>
int Extracharge();
int Tax();
int Sum();
int choice,month,extracharge ,date, units,sum;
long long int password;
double tax, totalBill;
char username[45], str[45];
int main()
{
	printf("                           PUNJAB STATE POWER CORPORATION LIMITED \n");
	printf("                                                                                                          online portal\n");
	printf("                                  log in first\n");
	printf("                          username    ");
	gets(username);
	x:printf("                          password    ");
	scanf(" %lld",&password);
	if(password>9999)
	{
		printf("                          welcome      ");
		puts(username);
	}
	else
	{
		printf("                          wrong password\n");
		goto x;
	}
	printf("client name- ");
	fflush(stdin);
	gets(str);
	a:printf("enter date- ");
	scanf("%d",&date);
	if(date>31)
	{
		printf("invalid input\n");
		goto a;
	}
	b:printf("enter month -");
	scanf("%d",& month);
	if(month>12)
	{
		printf("invalid input\n");
		goto b;
	}
	{
				printf("enter units- ");
	     		scanf("%d",&units);
				if(units>0 && units<=100)
				{
					printf("                                  Hi  ");
					puts(str);
					printf("**************************************your electricity bill**********************************************************\n");
					printf("                                            total units consumed= %.2d\n",units);
					totalBill= units*0.98;
					printf("                                            total bill= %lf\n",totalBill);
					Extracharge();
					Tax();
					Sum();
				}
				else if(units>100 && units<=220)
				{
					printf("                                  Hi  ");
					puts(str);
					printf("**************************************your electricity bill**********************************************************\n");
					printf("                                            total units consumed= %d\n",units);
					totalBill= units*1.65;
					printf("                                            total bill= %.2lf\n",totalBill);
					Extracharge();
					Tax();
					Sum();
				}
				else
				{
					printf("                             Hi  ");
					puts(str);
					printf("***************************************your electricity bill***********************************************************\n");
				    	printf("                                        total units consumed= %d\n",units);
						totalBill= units*2.36;
				    	printf("                                        total bill= %.2lf\n",totalBill);
				    	Extracharge();
				        Tax();
					    Sum();
				}
			}
		printf("########################################################\n");
		printf("charges for 0-100 unit is Rs 0.98 per unit\n");
		printf("charges for 100-220 unit is Rs 1.65 per unit\n");
		printf("charges for more then 220 unit is Rs 2.36 per unit\n");
		printf("#########################################################\n");
printf("                                  THANK YOU SIR\n");
printf("                                  VISIT US AGAIN\n ");
return 0;
getch();
}

int Extracharge()
{
	extracharge=(fabs(month-8)*60+date*2);
	printf("                                        extracharge=%d",extracharge);
	printf("\n");
}
int Tax ()
{
	tax=totalBill/4;
	printf("                                        total Bill=%.2lf",tax);
	printf("\n");
}
int Sum()
{
sum= ceil(totalBill+tax+extracharge);
printf("                                        total sum to be paid=%d", sum);
printf("\n");
}
	
