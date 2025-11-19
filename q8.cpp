/*
Print Squares of a numbers from 1 to N where N is user input
Input: 5
Output: 1 4 9 16 25
*/

#include <iostream>
using namespace std;

int main(){
  cout << "Enter the number: ";
  int n;
  cin >> n;

  for(int i=1 ; i<= n ; i++){
    int square = i*i ;
    cout << square << " ";
  }
}