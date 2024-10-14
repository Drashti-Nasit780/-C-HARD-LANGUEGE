#include<stdio.h>
         
	int add(int a,int b)
    {
		return a+b;
	}
	int sub(int a,int b)
	{
		return a-b;
	}
	int mul(int a,int b)
	{
		return a*b;
	}
	float div(float a,float b)
	{
		return a/b;
	}
	int modual(int s,int k)
	{
		return s%k;
	}
int main()
{
	int choice,i;
	float a,b;
	float s,k;	
	do
	{
		printf("\n\npress 1 for add\n\n");
		printf("\n\npress 2 for sub\n\n");
		printf("\n\npress 3 for mul\n\n");
		printf("\n\npress 4 for div\n\n");
		printf("\n\npress 5 for mod\n\n");
		printf("\n\npress 0 for exit\n\n");
		
		printf("\n\nEnter any number :");
		scanf("%d",&choice);
		
 	switch(choice)
	 {
	 	case 1 : 
	 	 printf("enter the value number %d :");
	 	 scanf("%d",&a);
	 	 printf("enter the value number  :");
	 	 scanf("%d",&b);
	 	 
	 	 printf("%d + %d = %d",a,b,add(a,b));
	 	 break;
		   
	 	 case 2 : 
	 	 printf("enter the value number  :");
	 	 scanf("%d",&a);
	 	 printf("enter the value number  :");
	 	 scanf("%d",&b);
	 	 
	 	 printf("%d - %d = %d",a,b,sub(a,b));
	 	 break;
	 	 
	 	 case 3 : 
	 	 printf("enter the value number  :");
	 	 scanf("%d",&a);
	 	 printf("enter the value number  :");
	 	 scanf("%d",&b);
	 	 
	 	 printf("%d * %d = %d",a,b,a*b);
	 	 break;
	 	 
	 	 case 4 : 
	 	 printf("enter the value number  :");
	 	 scanf("%f",&s);
	 	 printf("enter the value number  :");
	 	 scanf("%d",&k);
	 	 
	 	 printf("%.2f / %.2f = %.2f",s,k,div(s,k));
	 	 break;
	 	 
	 	 case 5 : 
	 	 printf("enter the value number  :");
	 	 scanf("%d",&a);
	 	 printf("enter the value number  :");
	 	 scanf("%d",&b);
	 	 
	 	 printf("%d %% %d = %d",a,b,modual(a,b));
	 	 break;
	 	 
	 	 default:
	 	 	printf("your exit ....!");
	 	 	
	 	 	printf("\n\n");
    }
	 
	  }while(choice);
	         
}
	

