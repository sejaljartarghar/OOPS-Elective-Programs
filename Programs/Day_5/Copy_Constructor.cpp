#include <iostream>
using namespace std;

class Rectangle{
    int len, wid;

public:
    Rectangle() {
        len = 10;
        wid = 20;
        cout<<endl<<"Default constructor"<<endl;
    }

    Rectangle(int x, int y){
        len = x;
        wid = y;
        cout<<endl<<"Parameterized Constructor"<<endl;
    }

    Rectangle(Rectangle &obj) {
        len = obj.len;
        wid = obj.wid;
        cout<<endl<<"copy Constructor"<<endl;
    }

    void Display() {
        cout<< "Length = "<<len <<endl;
        cout<< "width = "<<wid <<endl;
    }

    ~Rectangle() { //written at the end due to writing convention / redable
        cout << "Rectangle program ends"<<endl;
    }
};

int main(){
    int l,w;
    cout << "Enter Length and width = ";
    cin >> l >> w;

    Rectangle R1;
    R1.Display();

    Rectangle R2(l,w);
    R2.Display();

    Rectangle R3(R2);
    R3.Display();

    return 0;
}
