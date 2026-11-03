// write a c++ program with classes abstract class vehicle and derived class car and bike to display features of vehicle such as no of wheels, millege, fuel cpacity
#include <iostream>
using namespace std;

class vehicle{
public:
    virtual void features() = 0;
};

class Car : public vehicle{
public:
    void features() {
        cout<<"==== Car Features ===="<<endl;
        cout<< "No of wheels = 4"<<endl;
        cout<< "Millege = 50" << endl;
        cout<< "Fuel Capacity = 3L" << endl;
    }
};

class Bike : public vehicle{
public:
    void features() {
        cout<<"==== Bike Features ===="<<endl;
        cout<< "No of wheels= 2"<<endl;
        cout<< "Millege = 30" << endl;
        cout<< "Fuel Capacity = 2L" << endl;
    }
};

int main() {
    //vehicle v; -> as it contains a pure virtual function we cannot declare an obj out of this class
    Car c;
    c.features();
    Bike b;
    b.features();
    return 0;
}
