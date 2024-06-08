//Q3 - Write a C++ program to take length and breadth of a rectangle and print its area.

#include<iostream>
using namespace std;

int main() {

    int length, breadth;
    cout << "Enter Length of Rectangle: ";
    cin >> length;
    cout << "Enter Breadth of Rectangle: ";
    cin >> breadth;
    cout << "The Area of Rectangle is: " << length*breadth;
    return 0;
    
}