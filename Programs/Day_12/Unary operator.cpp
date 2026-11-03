// increment or decrement an object
#include <iostream>
using namespace std;


class Counter{
    int val;
public:
    Counter (int v = 0) : val(v) {}

    Counter& operator-- () {
        val--;
        return *this;
    }

    Counter operator--(int) {  // here int is add just to change the signature
        Counter temp = *this;
        val--;
        return temp;
    }
    int get() {
        return val;
    }
};

int main() {
    Counter c(5);
    --c;
    cout<<"Result = " << c.get()<<endl;

     c--;
    cout<<"Result = " << c.get()<<endl;
    return 0;
}


