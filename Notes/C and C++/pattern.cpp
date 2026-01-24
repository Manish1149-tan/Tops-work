#include<stdio.h>
int main()
{
	int col,row,r;
	printf(" Enter no of rows");
	scanf("%d",&row);
	for(r=1;r<=row;r++)
	{
		for(col=1; col<=r;col++);
		{
			printf("*");
	}
	        printf("\n");
	    }
	}
			
		
	

