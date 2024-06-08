//Q2 - Print the ASCII value of character ‘U’.

#include<iostream>
using namespace std;
int main() {
    char n;
    cout <<"Enter the value: ";
    cin >> n;
    cout <<"The ASCII value of " << n << " is: " << static_cast<int>(n) << endl;
    return 0;
}