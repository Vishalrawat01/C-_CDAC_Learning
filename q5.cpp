/*
Frequency of Each Digit
Print how many times each digit (0–9) occurs in a number.
*/
#include<iostream>
using namespace std;

int main(){
  cout << "Enter the num: ";
  int num;
  cin >> num;

  for (int i=0 ; i<num ; i++){
    int count = 0 ;
    for (int j=0 ; j<num; j++){
      count ++;
    }
    cout << "Frequency of " << i << " is " << count << endl;
  }
}