#include <iostream>
#include <string>
using namespace std;

int lowerCount(string str ){
    int vowCount = 0 ;
    for(int i=0; i<str.length();i++){
    if (str[i]== 'a' || str[i]== 'e'||
        str[i]== 'i'  ||  str[i]== 'o'||
        str[i]== 'u'){
        vowCount++;
        }
    }
    return vowCount ;
}
int main(){
   int result =  lowerCount("Meera");
     cout<< "count of vowels in lower case = " << result <<endl; 
    return 0;
}