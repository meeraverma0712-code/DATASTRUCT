#include <iostream>
using namespace std;
int main(){

int arr[5]= {12,34,12,3,68};
int n = sizeof(arr)/ sizeof(int);
int max = arr[0];
int min = arr[0];
for (int i =0;i<n;i++){
    if(arr[i]> max){
        max = arr[i];
    }
     if(arr[i]< min){
        min = arr[i];
    }
 }
    cout<<" Largest number = " << max<< endl  ;
    cout<<" Smallest number = " << min ;
return 0;
}