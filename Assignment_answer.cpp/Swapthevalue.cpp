//Q6 Write a C++ program to swap two numbers with the help of a third variable.

#include<iostream>
using namespace std;

int main() {

    int a,b,c;

    cout << "Enter the two number: "<<endl;
    cin >> a >> b;
    cout << "The value of before the Swap: " <<endl << a << endl << b << endl;
    swap(a,b);   // Frist Method
    c = a;       // Second Method
    a = b;
    b = c;
    cout << "The value of after the Swap: " << endl << a << endl << b << endl;
    return 0;
    }