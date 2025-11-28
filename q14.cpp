/*
Write a C++ program to swap two numbers using functions.
*/
#include <iostream>
using namespace std;

void swapByValue(int x1, int x2);

int main()
{

  cout << "Enter the num1: ";
  int n1;
  cin >> n1;

  cout << "Enter the num2: ";
  int n2;
  cin >> n2;

  swapByValue(n1, n2);
}

void swapByValue(int x1, int x2)
{
  int temp;
  temp = x1;
  x1 = x2;
  x2 = temp;

  cout << "iNside swap function" << endl;
  cout << "x1 = " << x1 << endl;
  cout << "x2 = " << x2 << endl;
}