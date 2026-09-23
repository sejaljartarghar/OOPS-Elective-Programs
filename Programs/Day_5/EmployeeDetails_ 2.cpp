// Write a cpp program to maintain emp data with fields emp id, name,and dept for 5 emps

#include <iostream>
using namespace std;

class Emp {
public:
    static int emp_id;
    string name;
    string dept;

public:
    Emp(string name, string dept) {
        this->name = name;
        this->dept = dept;
        ++emp_id;
    }

    void Display() {
        cout <<endl<< "Name = " <<name<<endl;
        cout << "Employee ID = " <<emp_id<<endl;
        cout << "Department = " <<dept<<endl;
    }

    ~Emp() {
        cout<<"Program ended" <<endl;
    }
};

int Emp :: emp_id = 100;  // we can initialize the starting value

int main() {


    Emp e1("Sejal", "EC");
    e1.Display();

    Emp e2("Kanal", "BBA");
    e2.Display();

    Emp e3("Unnati", "Fashion");
    e3.Display();

    Emp e4("Khushi", "BBA");
    e4.Display();

    Emp e5("Vaish", "EC");
    e5.Display();

    return 0;
}
