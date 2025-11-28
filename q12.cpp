/*
Find the GCD of two numbers
Input: 12 18
Output: 6
*/
#include <iostream>
using namespace std;

int gcd (int a,  int b){
  while(b != 0){
    int temp = b ;
    b = a%b;
    a = temp;
  }
  return a;
}

int main(){
  cout << "Enter the num1: " << endl;
  int num1;
  cin >> num1;

  cout << "Enter the num2: " << endl;
  int num2;
  cin >> num2;

  cout << "GCD of these two numbers is: " << gcd(num1, num2);

  return 0;
}