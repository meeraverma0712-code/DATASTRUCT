#include <iostream>
using namespace std;
   int main(){
   int  arr[5] = {4,7,2,9,1};
   int max = arr[0];
   for(int i=0 ;i<5;i++){
   
    if(arr[i]>max){
       max = arr[i];
     }
   }
    cout<< " max = " << max;
   return 0;
}
