#include<stdio.h>
main()
{
	int marks[2][2],col,row;
	printf("enter marks:");
	scanf("%d",&marks[0][0]);
	
	printf("enter marks:");
	scanf("%d",&marks[0][1]);
	
	printf("enter marks:");
	scanf("%d",&marks[1][0]);
	
	printf("enter marks:");
	scanf("%d",&marks[1][1]);
	
	for(col=0;col<=1;col++)
	{
		for(row=0;row<=1;row++)
		{
			printf(" %d\t",marks[col][row]);
		}
		printf("\n");
	}
	
}
