#include <iostream>
using namespace std;


class Shape {

public: virtual void draw() {
    cout<<"Shape\n";
    }
};

class Circle : public Shape {
public: void draw() override{
    cout<<"Circle\n";
    }
};

class Square : public Shape {
public: void draw() override{
    cout<<"Square\n";
    }
};

class Triangle : public Shape {
public: void draw() override{
    cout<<"Triangle\n";
    }
};

// array of pointer objects
int main() {
    Shape *shapes[3] = {new Circle(), new Square(), new Triangle()};
    for(int i=0; i<3; i++) {
        shapes[i] -> draw();
    }
    return 0;
}
