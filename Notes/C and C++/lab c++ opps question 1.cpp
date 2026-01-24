#include<iostream>
using namespace std;
class student
{
	int roll_no;
	string name;
	float total,percentage;
	public:
		// function to input detail
		void getdetails()
		{
			cout<<"enter the roll-no:";
			cin>>roll_no;
			cout<<"enter the name:";
			cin>>name;
			cout<<"enter the total marks:";
			cin>> total;
			cout<<"enter the percentage:";
			cin>>percentage;
		}
		 void putdetails()
		 {
		 	cout<<"\n--student detail"<<endl;
		 	cout<<"roll_no:"<<roll_no<<endl;
		 	cout<<"name:"<<name<<endl;
		 	cout<<" total :"<<total <<endl;
		 
		 	cout<<" percentage:"<<percentage<<endl;
		 }
		
};
int main()
{
	student s;
	s.getdetails();
	s.putdetails();
	
}
