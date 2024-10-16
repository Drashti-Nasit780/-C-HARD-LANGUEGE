#include<stdio.h>


int add(int sd,int ds)
{	
	
	return sd+ds;
}

int sub(int sd,int ds)
{	
	return sd-ds;
}

int mul(int sd,int ds)
{
	return sd*ds;
}

float div(float s ,float d)
{	
	return s/d;
}

int mod(int sd,int ds)
{	
	return sd%ds;
}

int main()
{
	int choice,i;
	
	int sd,ds;
	
	float s,d;
	
	
	do
	{
	
	printf("\n\n Calculator menu \n\n");
	printf("Press 1 for Addi:\n");
	printf("Press 2 for Sub:\n");
	printf("Press 3 for Mul:\n");	
	printf("Press 4 for Div:\n");
	printf("Press 5 for Mod:\n");
	printf("Press 0 for Exit:\n");
	
	
	      printf("\n\nEnter any number:");
	      scanf("%d",&choice);
	
	switch (choice)
			{
				case 1 :
					printf("Enter First  number:");
					scanf("%d",&sd);
	
					printf("Enter Second  number:");
					scanf("%d",&ds);
					
					printf("%d + %d = %d",sd,ds,add(sd,ds));
				break;
				
				case 2 :
					printf("Enter First  number:");
					scanf("%d",sd);
	
					printf("Enter Second  number:");
					scanf("%d",&ds);
					
					printf("%d - %d = %d",sd,ds,sub(sd,ds));
				break;
				
				case 3 :
					printf("Enter First  number:");
					scanf("%d",&sd);
	
					printf("Enter Second  number:");
					scanf("%d",&ds);
					
					printf("%d * %d = %d",sd,ds,mul(sd,ds));
				break;
				
				case 4 :
					printf("Enter First  number:");
					scanf("%f",&s);
	
					printf("Enter Second  number:");
					scanf("%f",&d);
					
					printf("%.2f / %.2f = %.2f",s,d,div(s,d));
				break;
				
				case 5 :
					printf("Enter First  number:");
					scanf("%d",&sd);
	
					printf("Enter Second  number:");
					scanf("%d",&ds);
					
					printf("%d %% %d = %d",sd,ds,mod(sd,ds));
					
				break;
				
			default: 
				printf("your exiting....!!");
		
			printf("\n");
				
			}
			
		}while(choice!=0);
		
		printf("\n");
}
    
	
	
	
