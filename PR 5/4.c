#include <stdio.h>

main()
{
	int row,col;
	printf("Enter Row:");
	scanf("%d",&row);
	printf("Enter Column:");
	scanf("%d",&col);
	
	int a[row][col];
	int i,j;
	
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("Enter a[%d][%d]:",i,j);
				scanf("%d",&a[i][j]);
			}
				printf("\n");
		}	
	int r,sum=0;
	printf("Enter the Number Of Row:");
	scanf("%d",&r);
	   for(i=0;i<row;i++)
	   {
		for(j=0;j<col;j++)
		{
			if(i==r)
			{
				printf("The Element Of Row: %d\n",a[r][j]);
				sum+=a[r][j];
			}
		}
	   }
	
    int c,sum1=0;
	    printf("Enter the Number Of Column :");
	    scanf("%d",&c);
   	     for(i=0;i<row;i++)
	     {
		   for(j=0;j<col;j++)
		   {   
			    if(j==c)
			    {
				    printf(" The Element Of Column: %d",a[i][c]);
				    sum+=a[i][c];
			    }
		}
		printf("\n");
	}
	printf("The Sum Of Row : %d\n\n",sum);
	printf("\nThe sum Of Column : %d\n",sum1);
}
