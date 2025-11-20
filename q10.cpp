/*
Find all the numbers divisible by 3 between 1 to N
Input: 20
Output: 3 6 9 12 15 18
*/
#include<iostream>
using namespace std;

int main(){
  cout << "Enter the number: ";
  int n;
  cin >> n;

  for(int i=1 ; i<=n ; i++){
    if(i%3==0){
      cout << i << " ";
    }
  }
}