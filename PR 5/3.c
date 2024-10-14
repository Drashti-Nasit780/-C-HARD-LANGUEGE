#include<stdio.h>
 
main()

{
  int row,col;
	printf("Enter the row :");
	scanf("%d",&row);
    printf("Enter the col :");
	scanf("%d",&col);
	
  int a[row],b[col];	
  int i,j;	
	 printf("\n\n input of the Arry\n\n:");
	 for(i=0;i<row;i++)
     {
        for(j=0;j<col;j++)	
        {
        	printf("enter a[%d][%d]=",a[j][i]);
        	scanf("%d",&a[j][i]);
		}
     }
	 
	 printf("\n\n output of the Arry\n\n:");
	 for(i=0;i<row;i++)
     {
        for(j=0;j<col;j++)	
        {
        	printf("enter a[%d][%d]=",a[j][i]);
        	scanf("%d",&a[j][i]);
		}
     } 
     
}
	    
