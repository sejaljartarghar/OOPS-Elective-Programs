// Write a C++ program to find the sum of two private data members numA and numB of two classes ABC and XYZ using a common friend function.
// Assume that the protoype for both the classes will be int add(ABC,XYZ); ...

#include<iostream>
using namespace std;
class XYZ;

class ABC
{
int numA;
public:
        void display()
    {
        cout<<"The value Stored in class ABC is: "<<numA<<endl;
    }

    void getdataABC(int d)
    {
        numA=d;
    }
   friend int add(ABC ,XYZ );
};

class XYZ
{
int numB;
public:
     friend int add(ABC ,XYZ );
    void getdataXYZ(int e)
    {
        numB=e;
    }
      void display()
    {
        cout<<"The value Stored in class XYZ is: "<<numB<<endl;
    }

};

    int add(ABC a1,XYZ b1)
    {
        return(a1.numA+b1.numB);
    }



int main()
{
    ABC a;
    XYZ b;
    a.getdataABC(2);
    a.display();
    b.getdataXYZ(6);
    b.display();
    cout<<"the Sum is : "<<add(a,b)<<endl;
    return 0;
}
