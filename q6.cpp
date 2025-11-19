/*
Armstrong Number (for any number of digits)
Check whether a number is Armstrong sum of cube of digits is the number(e.g., 153, 9474).
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
  cout << "Enter a number:";
  int num;
  cin >> num;


  int temp = num ;
  int digit = 0 ;

  int count = 0;
  while(temp !=0 ){
    temp = temp /10 ;
    count++;
  }

  temp = num ;
  int sum = 0;
  while(temp != 0){
    digit = temp % 10 ;
    sum += (pow(digit, count));
    temp = temp / 10 ;
  }

  if (sum == num){
    cout << num << " is an Armstrong number." << endl;
  }else{
    cout << num << " is not an Armstrong number." << endl;
  }
}
