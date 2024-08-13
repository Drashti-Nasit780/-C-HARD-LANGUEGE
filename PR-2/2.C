#include<stdio.h>
#include<conio.h>
main()
{
       int d;
       char w;
       clrscr();

       printf("Enter the marks:");
       scanf("%d",&d);

	if(d>91 && d<=100)
	      {
		  w = 'A';
	      }
	 else if (d>81 && d<=90)
	      {
		  w = 'B';
	      }
	  else if (d>71 && d<=80)
	      {
		   w = 'C';
	      }
	  else if (d>61 && d<=70)
	      {
		   w = 'D';
	      }

	  else if (d>51 && d<=34)
		{
		   w = 'E';
		}

	  else
		{
		   w = 'F';
		}
       switch(w)
       {
	  case'A':
	  case'a':
		 printf("Excellent work!");
		 break;
	   case 'B':
	   case 'b':
		  printf("well done.");
		  break;
	   case 'C':
	   case 'c':
		  printf("good gob.");
		  break;
	   case'D':
	   case'd':
		  printf("you passed, but you could do better");
		  break;

	   case'E':
	   case'e':
		 printf("you pass, need ipmpruvment");
		 break;
	   case'F':
	   case'f':
		 printf("sorry,you failed");
		 break;
	   default:
		   printf("ghar pe raho,savdhan raho!");
		   break;
       }



 getch();

}