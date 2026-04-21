#include <iostream>
using namespace std;
    int fastExpo(int x, int n ){

    int ans = 1;
    while(n>0){
    int lastDig = n & 1;
    if(lastDig){
    ans = ans * x;
    }
    x = x * x;
    n = n >> 1;
    }
    cout << ans <<  endl ;
   return ans;
   
 }
   
int main(){
  fastExpo(3,5);
  return 0;
}