// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> nums = {4, 10, 2, 8, 1, 7, 6};           // count numbers greater than 5
//     int count = 0;
//     for (int i=0 ; i<nums.size(); i++){
//         if(nums[i]> 5){
//            count ++;
//         }
//     }
//     cout << " count= " << count;
//     return 0;
// }

// build array permu

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums ={0,2,1,5,3,4};  
     vector<int> ans;
        for (int i=0 ; i<nums.size(); i++){
          ans.push_back(nums[nums[i]])  ;
    }
    for(int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
}
    return 0;
}
