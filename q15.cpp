/*
Write a C++ program to create a menu driven calculator with the concept of switch case for menu and functions for operations.
*/

#include <iostream>
using namespace std;

float add(float a, float b)
{
  return (a + b);
};

float sub(float a, float b)
{
  return (a - b);
};

float mul(float a, float b)
{
  return (a * b);
};

float divide(float a, float b)
{
  return (a / b);
}

int main()
{

  cout << "Enter the num1: " << endl;
  float num1;
  cin >> num1;

  cout << "Enter the num2: " << endl;
  float num2;
  cin >> num2;

  cout << "Enter your choise that you want to perform: " << endl;
  cout << "1. Addition" << endl;
  cout << "2. Substraction" << endl;
  cout << "3. Multiplication" << endl;
  cout << "4. division" << endl;
  int choise;
  cin >> choise;
  switch (choise)
  {
  case 1:
    cout << "Result = " << add(num1, num2);
    break;
  case 2:
    cout << "Result = " << sub(num1, num2);
    break;
  case 3:
    cout << "Result = " << mul(num1, num2);
    break;
  case 4:
    cout << "Result = " << divide(num1, num2);
    break;

  default:
    break;
  }
}