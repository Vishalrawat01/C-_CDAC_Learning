/*
Factorial using Loop
Compute factorial of a number using a for loop.
*/
#include <iostream>
using namespace std;

int main(){
    cout << "Enter the num: ";
    int num;
    cin >> num;

    int fact = 1;
    for(int i=1 ; i<=num;i++){
      fact = fact*i;
    }

    cout << "Factorial of " << num << " is " << fact << endl;
}