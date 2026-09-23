#include <iostream>
using namespace std;

class Complex {
    int real;
    int img;

public:
    void setData();
    void addNum(Complex x, Complex y);
    void Display();
}C1, C2, C3;

void Complex :: setData() {
    cout<< "Enter Real and Imaginary part = ";
    cin>> real>>img;
}

void Complex :: addNum(Complex x, Complex y){
    real = x.real + y.real;
    img = x.img + y.img;
}

void Complex :: Display() {
    cout << "The complex number is = " << real << "+j" <<img<<endl;
}

int main() {
    C1.setData();
    C1.Display();

    C2.setData();
    C2.Display();

    C3.addNum(C1,C2);
    C3.Display();

    return 0;
}
