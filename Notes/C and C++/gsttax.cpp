#include<stdio.h>
int main()
{
	float price[4],sum,gsttax,totalamount;

	printf(" enter the first value:");
	scanf("%f",& price[0]);
	
	printf(" enter the second value:");
	scanf("%f",& price[1]);
	
	printf(" enter the third value:");
	scanf("%f",& price[2]);
	
	printf(" enter the four  value:");
	scanf("%f",& price[3]);
	
	sum=price[0]+price[1]+price[2]+price[3];
	printf(" the sum of all value is:%f\n",sum);
	
	gsttax=sum*18/100;
	printf(" gsttax it is:%f\n",gsttax);
	
	totalamount=sum+gsttax;
	printf(" total value with gsttax is:%f",totalamount);
	
	
}
