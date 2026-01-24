#include<stdio.h>
int main()
{

int row,col;
printf("enter number of row and col:");
scanf("%d %d" ,&row, &col);

int marks [row] [col];

printf("enter the element of array:\n");

for(int i=0;i<row;i++)
{
	for (int j=0;j<col;j++)
	{
		printf("element of marks[%d][%d]:",i,j);
		scanf("%d",&marks[i][j]);
	}
}
	for(int i=0;i<col;i++)
{

		for(int j=0; j<row;j++)
	{
		printf("%d\t",marks[j][i]);
	}
	printf("\n ");
}
}
