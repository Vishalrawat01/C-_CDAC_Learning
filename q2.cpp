/*
Sum of First N Natural Numbers
Use a while loop to compute the sum of first N natural numbers.
*/
#include <iostream>
using namespace std;

int main() {
  cout << "Enter the number: ";
  int num ;
  cin >> num;

  int sum = 0;
  int n = num ;

  while (n > 0)
  {
    sum+= n;
    n--;
  }

  cout << "Sum of n:" << num <<" Natural numer is: " << sum ;

}