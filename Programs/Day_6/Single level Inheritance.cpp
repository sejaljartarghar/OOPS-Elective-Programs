// Single Level inheritance.

#include<iostream>
using namespace std;

class Animal
{
protected:
    int legs=4;
public:

    void display1()
    {
        cout<< "==== Class Animal ====" <<endl;
        cout<<"Legs= "<<legs<<endl;
    }
};

class Dog: public Animal
{
protected:
    bool tail = true;
public:
    void display2()
    {
        cout<<"\n==== Class Dog ====" <<endl;
        cout<<"Tail= "<<tail<<endl;
        cout<<"Legs= "<<legs<<endl;
    }
};

int main()
{
    Animal a1;
    Dog d1;
    d1.display1();
    d1.display2();
}
