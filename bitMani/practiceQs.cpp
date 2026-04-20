#include <iostream>
using namespace std;
    int getIhBit(int num , int i){
    int  mask = 1 << i;
    if (!(num & mask)){
        return 0 ;
         }
    else {
        return 1;
    }
    cout<< endl;
   }

int main(){
  cout <<  getIhBit(7,2);
 
    
    return 0;
}