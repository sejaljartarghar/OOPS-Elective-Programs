// write a C++ program to check if  a string is palindrome

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[] = "madam";
    int len = strlen(str);
    int j = len-1;
    int i = 0;
    bool ispalindrome = true;
    while (i < j) {
        if(str[i] == str[j]){
            j--;
            i++;
        }
        else{
            ispalindrome = false;
            break;
        }
    }
    if(ispalindrome)
        cout << "String " << str <<" is Palindrome" << endl ;
    else
        cout << "String is not a Palindrome"<< endl;

    // with string data type
    string s1 = "racecar";
    string s2 = s1;

    if(s1 == s2)
         cout << "String " << s1 << " is Palindrome" << endl;
     else
        cout << "String is not a Palindrome"<< endl;

    return 0;

}
