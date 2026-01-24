#include<iostream>
using namespace std;
class teacher{
	
    public:
    	string name;
    	string dept;
    	string subject;
    	teacher()
    	{
    		cout<<"Hello Im constructor"<<endl;
    		dept="IT";//default value
		}
};
int main()
{
	teacher t1;
	t1.name="manish";
	t1.subject="c++";
	cout<<"name is :"<<t1.name<<endl;
	cout<<"subject is :"<<t1.subject<<endl;
	cout<<" dept:"<<t1.dept<<endl;
	teacher t2;
	cout<<"dept:"<<t2.dept<<endl;
}
	

