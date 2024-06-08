//Q5 - Write a C++ program to find size of basic data types.

#include<iostream>
using namespace std;
int main(){

    cout << "Size of fundamental data types :" << endl;
    cout << "Size of char: " << sizeof(char) << " byte. " << endl;
    cout << "Size of int: " << sizeof(int) << " byte. " << endl;
    cout << "Size of float: " << sizeof(float) << " byte. " << endl;
    cout << "Size of double: " << sizeof(double) << " byte. " << endl;
    cout << "Size of short: " << sizeof(short) << " byte. " << endl;
    cout << "Size of long: " << sizeof(long) << " byte. " << endl;
    cout << "Size of long long: " << sizeof(long long) << " byte. " << endl;
    cout << "Size of long double: " << sizeof(long double) << " byte. " << endl;
    cout << "Size of bool: " << sizeof(bool) << " byte. " << endl;

    return 0;
}