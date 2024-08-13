#include<stdio.h>
#include<conio.h>
main()
{
       int d;
       clrscr();
	    printf("Enter the marks:");
	    scanf("%d",&d);

      (d>91 && d<=100)
	      ?printf("your Enter grade A")
	      :
      (d>81 && d<=90)
	      ?printf("your Enter grade B")
	      :
      (d>71 && d<=80)
	      ?printf("your Enter grade C")
	      :
      (d>61 && d<=70)
	      ?printf("your Enter grade D")
	      :
      (d>34 && d<=60)
	      ?printf("your Enter grade E")
	      :
		     printf("you are f");





 getch();

}