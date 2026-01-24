#include<stdio.h>
int main()
{
	int i , rem,rev=0,j;
	printf(" enter the number:");
	scanf("%d",&j);
	for( i=j;i>0;i/=10)
	{
		rem=i%10;
		rev=rev*10+rem;	
	}
	
	printf(" reversed number is:%d\n",rev);
	
}
