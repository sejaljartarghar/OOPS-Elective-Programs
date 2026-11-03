// Add / Substract 2 complex numbers
#include <iostream>
using namespace std;

class complex{
    float re, im;
public:
    complex(float r = 0, float i = 0) : re(r), im(i) {}
    complex operator-(const complex &c) {
        return complex(re - c.re, im - c.im);
    }

    void show() {
        cout<< re << "-" << im <<"i";
    }
};

int main() {
complex a(2,3), b(4,5);
complex c = b - a;
c.show();
}
