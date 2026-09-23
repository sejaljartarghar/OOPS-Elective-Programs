#include<iostream>
using namespace std;

class Time{
    int secs;
    int mins;
    int hours;

public:
    void setTime(int s, int m, int h){
        secs = s;
        mins = m;
        hours = h;
    }

    void print() {
        cout<<"Time = " << hours << ":" << mins <<":" << secs <<endl;
    }
}T1;

int main() {
    int m,s,h;
    cout<<"Enter Hours, mins and secs = ";
    cin>>h>>m>>s;

    T1.setTime(s,m,h);
    T1.print();
    return 0;
}
