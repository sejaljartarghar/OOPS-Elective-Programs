// write a c++ program to initialize employee id and dept for an employee in a company

#include<iostream>
using namespace std;

class Employee {
    int empId;
    string dept;

public:
    Employee() {
        cout<<"Enter Employee ID and Department = ";
        cin>> empId >> dept;
    }

    void Display() {
    cout<<"Employee ID = " << empId << endl << "Department = " << dept <<endl;
    }
}E1,E2;


int main() {
    E1.Display();
    E2.Display();

    return 0;
}
