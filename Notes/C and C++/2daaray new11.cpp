#include<stdio.h>
int main()
{

int row,col,a[3][2];
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
	for(int i=0;i<3;i++)
{

		for(int j=0; j<2;j++)
	{
		printf("%d\t",marks[i][j]);
	}
	printf("\n ");
}
}
