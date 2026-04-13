#include <iostream>
#include <string>
using namespace std;

bool areAlmostEqual(string str1,string str2){
if(str1.length()!=str2.length()){
return false;
}
char diffChar1,diffChar2;
int diff=0;
for(int i=0;i<str1.length();i++){
if(str1[i]!=str2[i]){
if(!diff){
diffChar1=str1[i];
diffChar2=str2[i];
}else
if(str1[i]!=diffChar2||str2[i]!=diffChar1){
return false;
}
}
}
}
int main(){
   bool result = areAlmostEqual("bank", "kanb");
    return result ;
}