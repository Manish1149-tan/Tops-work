#include<stdio.h>
 main()
{
	int age=35;
	int *ptr= &age;
	int _age=*ptr;
	
	printf(" address of age:%d \n",&age);
	printf(" value ptr:%d \n",*ptr);
	printf(" address of ptr:%d \n",&ptr);
	
	printf("\n \n");
	
	printf(" value of age:%d \n",age);
	printf(" value of ptr:%d \n",*ptr);
	printf(" value: %d \n",*(&age));
}
