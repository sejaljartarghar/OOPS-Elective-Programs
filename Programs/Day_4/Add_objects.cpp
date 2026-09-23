
#include<iostream>
using namespace std;

class Time{
    int secs;
    int mins;
    int hours;

public:
    void setTime(int s, int m, int h);
    void addTime(Time x, Time y);
    void print();
}T1,T2,T3;

void Time :: setTime(int s, int m, int h) {
        secs = s;
        mins = m;
        hours = h;
}

void Time :: addTime(Time x, Time y) {
    hours = x.hours + y.hours;
    mins = x.mins + y.mins;
    secs = x.secs + y.secs;
}

void Time :: print() {
    cout<<"Time = " << hours << ":" << mins <<":" << secs <<endl;
}

int main() {
    int m,s,h;
    cout<<"Enter Hours, mins and secs = ";
    cin>>h>>m>>s;

    T1.setTime(s,m,h);
    T1.print();

    cout<<"Enter Hours, mins and secs = ";
    cin>>h>>m>>s;

    T2.setTime(s,m,h);
    T1.print();

    T3.addTime(T1,T2);
    T3.print();
    return 0;
}
