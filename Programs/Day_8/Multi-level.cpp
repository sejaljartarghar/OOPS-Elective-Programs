//Write  a c++ program to implement multi-level inheritance using vehicle, car and sports car as classes, use appropriate member functions and data members
#include<iostream>
using namespace std;

class Vehicle {
public:
    string color;

protected:
    float milege;
public:
    Vehicle(string c, float m) {
        milege = m;
        color = c;
    }
    void display1() {
        cout<< endl <<"=====Vehicle Class details===="<<endl;
        cout<< "Vehicle Color :- " << color <<endl;
        cout<< "Vehicle Milege :- " << milege <<endl;
    }
};

class Car : public Vehicle {
public:
    int numOfDoors;
    string fuelType;

public:
    Car(string type, string c, float m): Vehicle (c,m){
        numOfDoors = 4;
        fuelType = type;
    }

    void display2() {
        cout<< endl <<"====Car Class===="<<endl;
        cout<< "No of doors in the car : " << numOfDoors <<endl;
        cout<< "Fuel Type : " << fuelType << endl;
    }
};

class SportsCar : public Car {
public:
    string turbo;
    int maxspeed;

public:
    SportsCar (int maxsp, string turbo, string type, string c, float m) : Car(type, c, m){
        maxspeed = 1000;
        this->turbo = turbo;
        numOfDoors = 2;
    }

    void display3() {
        cout<< endl <<"===Sports Car Class==="<<endl;
        cout<< "Is this car turbo? :- " << turbo << endl;
        cout<< "Maxspeed of the Vehicle: " <<maxspeed <<endl;
    }
};

int main() {
    int  maxsp;
    string type,c, turbo;
    float m;

    cout << "Enter Fuel Type and color of the car : ";
    cin >> type >> c;

    cout << "Enter milege and is the car turbo? - ";
    cin >> m >> turbo;

    Vehicle V(c, m);
    V.display1();

    SportsCar SC(maxsp, turbo, type, c, m);
    SC.display3();
    SC.display2();
    SC.display1();

    Car C(type, c, m);
    C.display1();
    C.display2();




}
