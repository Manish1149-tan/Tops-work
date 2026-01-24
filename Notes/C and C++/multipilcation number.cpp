#include<stdio.h>
int main()
{
	int i,num,ans;
	printf("enter number");
	scanf("%d",& num);
	for(i=1;i<=10;i++)
	{
		ans=num*1;
		printf("%d * %d =%d\n",i,ans,num*i);
	}
}
