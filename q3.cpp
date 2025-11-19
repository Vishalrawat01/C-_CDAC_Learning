/*
Count Digits in a Number
Input a number and print how many digits it has.
*/
#include <iostream>
using namespace std;

int main(){
    cout << "Enter the num: ";
    int num;
    cin >> num;

    int count = 0;
    int temp = num;

    if(temp == 0){
      return 1;
    }else{
      while(temp != 0){
        temp = temp/10;
        count++;
      }
    }

    cout << "The number of digits in " << num << " is: " << count;

}