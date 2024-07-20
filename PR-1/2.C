#include<stdio.h>
#include<conio.h>

main()
{
   int  b,h,d,t,ans;

     clrscr();
		printf("please the base salary:");
		scanf("%d",&b);
		printf("please the HRA salary:");
		scanf("%d",&h);
		printf("please the DA salary:");
		scanf("%d",&d);
		printf("please the TA salary:");
		scanf("%d",&t);
		ans=b+ (b * h/100)+ (b * d/100)+ (b * t/100);
		printf("Gross salary is :%d",ans);

 getch();
}





