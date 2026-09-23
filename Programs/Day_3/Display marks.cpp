#include <iostream>
using namespace std;

class Test {
private :
    int marks;
    float gpa;

public:
    void setData() {
        marks = 300;
        gpa = 9.36;
    }

    void displayData() {
        cout<< "Marks: " << marks << endl;
        cout<< "CGPA: " << gpa << endl;
    }
};

int main() {
    Test T1;
    T1.setData();
    T1.displayData();
    return 0;
}
