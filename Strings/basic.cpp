#include <iostream>
using namespace std;

    

    void ToUpper( char word[] , int n ){
        for (int i =0 ; i< n ; i++){
            char ch = word[i];
            if(ch>= 'A'&& ch<= 'Z'){

                continue;
            }
            else{
                word[i]=ch - 'a'+'A';
            }
        }

    }
int main(){
      char word[]= "sanbdjhedbsd";
      ToUpper(word, 12);
      cout<< word<< endl;
     

    
    return 0;
}


