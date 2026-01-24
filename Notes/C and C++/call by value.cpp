#include<stdio.h>
int square(int num);
int main()
{
	// int age=22;
	// int *ptr+&age;
	int num=5;
	printf("value of num is: %d\n",num);
  printf("square of numberis: %d\n", square(num));
}
int square(int num)
{
	num=num * num;
	return num;
}

