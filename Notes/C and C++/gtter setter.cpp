#include<iostream>
using namespace std;
class teacher{
	private:
		double salary;
    public:
    	string name;
    	string dept;
    	string subject;
//   setter
    void setsalary(double s)
    {
    	salary=s;
	}
	//getter
	 void getsalary()
	 {
	 	cout<<"salary is:"<<salary<<endl;
	 }
};
int main()
{
	teacher t1;
	t1.name="manish";
	t1.dept="IT";
	t1.subject="c++";
	t1.setsalary(25000);
	cout<<"name is :"<<t1.name<<endl;
	cout<<"subject is :"<<t1.subject<<endl;
	cout<<"dept is:"<<t1.dept<<endl;
	t1.getsalary();
	
}
