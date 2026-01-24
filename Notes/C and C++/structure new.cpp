#include<stdio.h>
#include<string.h>
struct student{
	char name[100];
	int roll;
	float cgpa;
};
 int main()
 {
 	struct student s1;
 	// s1, name= "manish";
 	//strcpy(s1.name,"manish");
 	//s1.roll=1;
 	//s1.cgpa=6.75;
 //	printf("Roll no is:%d\n", s1.roll);
 	//printf(" name is:%s\n",s1.name);
 	//printf("cgpa is :%f\n",s1.cgpa);
 }
 int main()
 {
 	struct student IT[50];
 	struct student MBA[40];
 	strcpy(IT[0].name,"manish");
 	IT[0].roll=1;
 	IT[0].cgpa=6.75;
 	printf("IT student roll no is:%d\n", IT[0].roll);
 	printf(" IT studnet name is:%s\n",IT[0].name);
 	printf("IT studnet cgpa is :%f\n",.cgpa);
 }
