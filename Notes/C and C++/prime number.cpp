#include<stdio.h>
int main()
{
	int num,count,i;
	printf("\n enter the number");
	scanf("%d", & num);
	for(i=2;i<num;i++)
	{
		if(num% i==0)
		{
			count ++;
		}
	}
	if(count==0)
	{
		printf("\n %d is prime number",num);
	}
	else
	{
		printf("\n %d is not prime number",num);
	}
}
