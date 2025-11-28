#include <iostream>
using namespace std;

class Complex
{
public:
  float real, imag;

  void input()
  {
    cout << "Enter real part: ";
    cin >> real;
    cout << "Enter imaginary part: ";
    cin >> imag;
  }

  void display()
  {
    cout << real << " + " << imag << "i";
  }
};

Complex add(Complex a, Complex b)
{
  Complex temp;

  temp.real = a.real + b.real;
  temp.imag = a.imag + b.imag;
  return temp;
}

Complex sub(Complex a, Complex b)
{
  Complex temp;

  temp.real = a.real - b.real;
  temp.imag = a.imag - b.imag;
  return temp;
}

Complex mul(Complex a, Complex b)
{
  Complex temp;
  temp.real = (a.real * b.real) - (a.imag * b.imag);
  temp.imag = (a.real * b.imag) + (a.imag * b.real);
  return temp;
}

int main()
{
  Complex c1, c2, result;
  int choice;

  cout << "Enter first complex number:\n";
  c1.input();

  cout << "Enter first complex number:\n";
  c2.input();

  do
  {
    cout << "\n\n===== MENU =====\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
      result = add(c1, c2);
      cout << "Result = ";
      result.display();
      break;

    case 2:
      result = sub(c1, c2);
      cout << "Result = ";
      result.display();
      break;

    case 3:
      result = mul(c1, c2);
      cout << "Result = ";
      result.display();
      break;

    case 4:
      cout << "Exiting program...";
      break;

    default:
      cout << "Invalid Choice!";
    }
  } while (choice != 4);
  return 0;
}