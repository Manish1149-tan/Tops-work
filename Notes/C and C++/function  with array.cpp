#include<stdio.h>
int data(int arr[],int num);
int main()
{
	int arr[]={1,2,3,4,5,6,7};
	data(arr,4);
	return 0;
}
	int data(int arr[], int num)
	{
		for(int i=0; i<num; i++)
	{
		printf("%d index: %d\n", i,arr[i]);
	}
}
