#include <iostream>
using namespace std;
   int main(){
   int  arr[5] = {4,7,2,9,1};
   int sum = 0;
   for(int i=0 ;i<5;i++){
   
     sum = arr[i] + sum;
     }
   
    cout<< " sum = " << sum;
   return 0;
}
