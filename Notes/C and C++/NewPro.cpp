#include<iostream>
using namespace std;
int average(int mar[],int n)
{
	int sum=0,avg;
	for(int i=0;i<n;i++)
	{
	sum+=mar[i];
	}
  cout<<"sum of an array is"<<sum<<endl;
  avg=sum/n;
  cout<<"average of an array is:"<<avg<<endl;
}
 int main()
   {
 	int n,mark,i,avg;
 	int marks[50];
 	cout<<"enter the value:"<<endl;
 	cin>>n;
   for(int i=0;i<n;i++)
   {
   	cout<<"enter the value:"<<endl;
   	cin>>marks[i];
   }
   for(int i=0;i<n;i++){
   	cout<<marks[i]<<" "<<endl;
   }
   return 0;
}
	
	

