#include <iostream>
using namespace std;


   void oddOrEven(int num){
    if (!(num & 1)){
        cout << "even" ;

    }
    else {
         cout << "odd";
    }
    cout<< endl;
   }

int main(){
    oddOrEven(12);
  oddOrEven(10);
    
    return 0;
}