#include <iostream>
using namespace std;

class person {
public:
    string name, address;
    int c_no;

    void getdetails() {
        cout << "Enter name, address, and contact no: ";
        cin >> name >> address >> c_no;
    }

    void display() {
        cout << "Name: " << name << "\tAddress: " << address << "\tContact No: " << c_no << endl;
    }
};

// Derived class (single inheritance)
class Employee : public person {
public:
    int salary;

    void getdetailEmp() {
        getdetails(); // base class function call
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayEmp() {
        display(); // base class display
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    person p;
    p.getdetails();
    p.display();

    Employee e;
    e.getdetailEmp();
    e.displayEmp();

    return 0;
}

