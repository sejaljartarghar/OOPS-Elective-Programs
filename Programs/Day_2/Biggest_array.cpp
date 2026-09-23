// Write a C++ program to find biggest number in a list

#include<iostream>
using namespace std;

int biggest(int *arr, int n){
    int big = arr[0];
     for(int i=1; i<n; i++) {
        if(arr[i] > big)
            big = arr[i];
     }
     return big;
}

int main() {
    int arr[100];
    int n;
    // int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter the number of elements: ";
    cin >> n ;

    cout << "Enter those " << n << " elements in the array : ";
    for(int i=0; i<n; i++)
        cin >> arr[i];

    int result = biggest(arr,n);
        cout << "Biggest element in list : " << result <<endl;
        return 0;
}
