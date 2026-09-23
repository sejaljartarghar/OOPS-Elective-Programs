//Write a c++ program to assign mileage to a car using constructor

#include <iostream>
using namespace std;

class Car{
    float mileage;
public:
    Car(){
        cin >> mileage;
    }

    void Display() {
    cout<<"Mileage = " << mileage << endl;
    }

    ~Car(){
        cout << "Car program ends"<<endl;
    }
};


int main (){
    Car C1,C2,C3;
    C1.Display();
    C2.Display();
    C3.Display();
    return 0;
}
