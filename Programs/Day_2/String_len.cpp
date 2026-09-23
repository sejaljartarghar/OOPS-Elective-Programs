// Write a C++ program to find the length of the string

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[] = "Hello";
    int len = 0;

    string s = "hello";
    len = s.length();

   // for(int i=0 ; str[i] != '\0'; i++){
   //     len++;
   // }
    cout << "Length of the char array: " << strlen(str) << endl;
    cout << "Length of the string: " << len << endl;
    return 0;
}
