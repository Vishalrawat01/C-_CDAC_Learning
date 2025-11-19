/*
Find power of a number using loop (a^b)
Input: a=2 b=5
Output: 32
*/

#include <iostream>
using namespace std;

int main(){
  cout << "Enter the number: ";
  int a ;
  cin >> a ;

  cout << "Enter the powerOff: ";
  int b ;
  cin >> b ;

  int pow;


  for(int i=1 ; i<=b ; i++){
    int temp = a*i;
    pow = temp ;

  }

  cout << "Power is: " << pow;
}
