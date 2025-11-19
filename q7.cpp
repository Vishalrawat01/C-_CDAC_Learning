// Count the number of even and odd digits in a number:
// Input: 4523212
// Output: Even digits=4 Odd digits=3


#include <iostream>
using namespace std;
int main (){
  cout << "Enter the number: ";
  int num ;
  cin >> num;

  int Evencount = 0;
  int OddCount =0;

  int temp = num ;
  int rem;


  while(temp != 0){
    rem = temp%10;
    if(rem%2==0){
      Evencount++;
    }else{
      OddCount++;
    }
    temp = temp/10;
  }

  cout << "Even Digits: " << Evencount << " Odd Digits: " << OddCount ;
}