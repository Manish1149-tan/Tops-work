//Example of Multilevel Inhertiance 
#include<iostream>
using namespace std;
class A
{
	public :
	void greet()
	{
		cout<<"Good Morning from A"<<endl;
	}	
};
class B : public A
{
	public:
	void greet1()
	{
		cout<<"Good Morning from B"<<endl;
	}
};
class C : public B
{
	public:
	void greet()
	{
		A::greet();
		cout<<"Good Morning from C"<<endl;
	}
};
int main()
{
	A objA;
	B objB;
	C objC;
	cout<<"From objA "<<endl;
	objA.greet();
	cout<<"From objB "<<endl;
	objB.greet1();
	cout<<"From objC "<<endl;
	objC.greet();
	objC.greet1();
	//objC.greet2();
}

