// write a c++ program to read an emp record with id, name, dept and salary and display them
#include <iostream>
using namespace std;

class Emp{
    string name;
    string dept;
    int salary;;
    int id;

public:
    Emp() {
        cout<<"Constructor is called"<<endl;
    }
    Emp(int i, string n, int s) {
        name = n;
        dept = "EC";
        id = i;
        salary = s;
        cout<<"Constructor is called"<<endl;
    }

    void setData(int id, string n, int s){
        name = n;
        dept = "EC";
        id = id;
        salary = s;
    }

    void Display() {
        cout << "=====Employee Details ====="<<endl;
        cout << "Name = "<<name<<endl;
        cout << "Department = "<<dept<<endl;
        cout << "Salary =  "<<salary<<endl;
        cout << "ID = "<<id<<endl;
    }

};


int main() {
    int id;
    string n, d;
    int s;

    cout<< "Enter the Employee details Name, salary and  id  =";
    cin>>n>>s>>id;
    Emp E1(id,n,s);

    cout<< "Enter the Employee details Name, salary and  id  =";
    cin>>n>>s>>id;
    Emp E2;


    E1.Display();
    E2,setData();
    E2.Display();
}
