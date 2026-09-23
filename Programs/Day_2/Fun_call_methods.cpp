// Write a C++ program to add 2 numbers using these 3 methods (Pass by value, pass by ref, and pass by pointer)

#include <iostream>
using namespace std;

void addValue(int ans){
    int a = 10;
    int b = 20;
    ans = a+b;
    cout << "Pass by value : " << ans << endl;
}

void addRef(int &ans){
    int a = 10;
    int b = 20;
    ans = a+b;
    cout << "Pass by Reference : " << ans << endl;
}

void addPtr(int *ans){
    int a = 10;
    int b = 20;
    *ans = a+b;
    cout << "Pass by Pointer : " << *ans << endl;

}


void swapValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "Pass by value"<< endl;
    cout<< "Value x = " << x << " Value y = " << y << endl;
}

int main() {
    int x = 5, y = 25;
    int ans = 0;

    addValue(ans);
    cout << "Ans = " << ans <<endl;
    addRef(ans);
    cout << "Ans = " << ans <<endl;
    addPtr(&ans);
    cout << "Ans = " << ans <<endl;

    swapValue(x,y);
    cout<< "Value x = " << x << " Value y = " << y << endl;

    return 0;
}
