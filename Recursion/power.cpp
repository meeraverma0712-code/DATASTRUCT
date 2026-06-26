#include <iostream>
using namespace std;

// without recursion
  int power(int x , int n){
   int pow = 1;
   for(int i=0; i<n ; i++){
   pow = pow * x;
   }
   return pow;
   }
// with recursion 
  int recurPower(int x , int n){
    if(n==0){
      return 1;
    }
  int halfPow = power(x , n/2);
  int halfPowSq = halfPow* halfPow;

  if(n%2 != 0){
    // odd
    return x * halfPowSq;
}
  return halfPowSq;
}
int main(){
cout << recurPower(2,5);
  return 0;
}