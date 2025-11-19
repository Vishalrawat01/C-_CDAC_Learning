/*
Greatest of Three Numbers
Read three integers and print the largest.
*/
#include <iostream>
using namespace std;

int main() {
    cout << "Enter the num 1: ";
    int num1;
    cin >> num1;

    cout << "Enter the num 2: ";
    int num2;
    cin >> num2;

    cout << "Enter the num 3: ";
    int num3;
    cin >> num3;

    if(num1 >= num2 && num1 >= num3) {
        cout << "The largest number is: " << num1 << endl;
    } 
    else if(num2 >= num1 && num2 >= num3) {
        cout << "The largest number is: " << num2 << endl;
    } 
    else {
        cout << "The largest number is: " << num3 << endl;
    }
}
