#include<stdio.h>
int _data(int *arr,int num);
int main()
{
	int arr[]={1,2,3,4,5,6,7};
	_data(arr,5);
	return 0;
}
	int _data(int *arr, int num)
	{
		for(int i=0; i<num; i++)
	{
		printf("%d index: %d\n", i,arr[i]);
	}
}
