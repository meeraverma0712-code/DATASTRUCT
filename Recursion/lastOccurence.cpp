#include <iostream>
#include <vector>
using namespace std;
  int lastOccurence (vector<int> arr, int target,int i ){

    if(i == arr.size()){
      return -1;
    }
    int idx = lastOccurence(arr, target , i+1);
    if(idx == -1 && arr[i]== target){
         return i;
      } 
    return idx;
  }
int main(){
vector<int> arr = {1,2,3,3,3,4,5};
cout << " last occurence is in index = " << lastOccurence(arr,3, 0);
  return 0;
}