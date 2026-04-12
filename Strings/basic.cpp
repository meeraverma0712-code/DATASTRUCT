#include <iostream>
using namespace std;

    // char sentence[30];
    // cin.getline(sentence , 30);

    // cout<<" this is your sentence : "<< sentence<<  endl;


    // upper case

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


