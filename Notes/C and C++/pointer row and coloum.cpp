#include<stdio.h>
main()
{
	int marks[2][2],i,j;
	printf("enter marks:");
	scanf("%d",&marks[0][0]);
	
	printf("enter marks:");
	scanf("%d",&marks[0][1]);
	
	printf("enter marks:");
	scanf("%d",&marks[1][0]);
	
	printf("enter marks:");
	scanf("%d",&marks[1][1]);
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		printf(" %d\t",marks[i][j]);
	}
	printf("\n");
	
}
