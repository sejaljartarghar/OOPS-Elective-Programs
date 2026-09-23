#include <iostream>
using namespace std;

class Rectangle {
    int w; // these are actual variables
    int h;
    int area;
public:
    void setData(int w, int h);
    void DisplayArea();
}R1;

void Rectangle :: setData(int w, int h){  // these are formal parameters
    this->w = w; // we can use same variable name using this keyword, which always refers to the data members
    this->h = h;
    area  = w * h;
}

void Rectangle :: DisplayArea(){
    cout << endl << "Area: " << area <<endl;
}

int main() {
    int w,h;
    cout << "Enter width:";
    cin >> w;
    cout<<"Enter height:";
    cin>> h;

    R1.setData(w,h);
    R1.DisplayArea();
}
