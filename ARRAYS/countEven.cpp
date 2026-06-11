#include <iostream>
using namespace std;
   int main(){
   int  arr[5] = {4,7,2,8,1};
   int n =5;
   int count = 0;
   for(int i=0 ;i<5;i++){
    if(arr[i] % 2 == 0){
        count+=1;
    }
    
    }
    cout<< " even count = " << count;
   return 0;
}