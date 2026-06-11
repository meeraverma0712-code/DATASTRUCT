#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums = { 4, -10, 2, 8, 1};
    int max = nums[0];
    for (int i=1 ; i<nums.size(); i++){
        if(nums[i]> max){
            max = nums[i];
        }
    }
    cout << " max= " << max;
    return 0;
}