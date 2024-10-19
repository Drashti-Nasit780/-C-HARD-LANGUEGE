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
	 printf("\n\n input of the Arry:");
	 for(i=0;i<row;i++)
     {
        for(j=0;j<col;j++)	
        {
        	printf("enter a[%d][%d]=",a[i][j]);
        	scanf("%d",&a[i][j]);
		}
     }  
        int large = 0 ;
		for(i=0;i<row;i++)	
		{
			for(j=0;j<col;j++)
			{
				if(i>large)
				{
					printf("%d",a[i][j]);
				}
				
     		}
	    }
		     printf("arry of matrix for large number: ",large);
			
     }	
	
}
