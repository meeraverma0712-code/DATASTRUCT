#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char word[], int n){
    int st = 0 ; int end = n-1;
    while(st<end){
        if(word[st++] != word[end--]){
         cout << "is not palindrome ";
        return false;
        }
       }
     cout << "is palindrome ";
     return true;
}
   int main(){
    char word[]= "racecar" ;
    isPalindrome(word, strlen(word));
    return 0;
}