 // write a c++ program to create a student class with data members name and age , and display the details using an object

#include <iostream>
using namespace std;

class Student{
public:
    string name;
    int age;

public:
    void setData();
    void Display();
}S1, S2;

void Student :: setData(){
    cout << "Enter your Name :";
    cin >> name;

    cout << "Enter Age:";
    cin >>age;
}

void Student :: Display() {
    cout << endl <<"====== Output ======"<<endl;
    cout<< "Name: " << name <<endl;
    cout<< "Age: " << age <<endl;
}

int main() {
S1.setData();
S2.setData();

S1.Display();
S2.Display();

return 0;
}
