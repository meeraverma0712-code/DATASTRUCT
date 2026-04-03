// #include <iostream>
// #include <climits>
// using namespace std;

// void print(int arr[], int n){
//     for(int i=0;i<n;i++){
//         cout << arr[i] <<" ";
//     }
// }

// void countSort(int arr[], int n){

//     int freq[1000000] = {0};

//     int minVal = INT_MAX ,maxVal = INT_MIN;

//     for (int i=0; i<n;i++){
//         minVal= min(minVal , arr[i]);
//         maxVal= max(maxVal , arr[i]);
//     }

//     for (int i=0; i<n;i++){
//         freq[arr[i]]++;
//     }

//     int j = 0;

//     for(int i = minVal; i <= maxVal; i++){
//         while(freq[i] > 0){
//             arr[j++] = i;
//             freq[i]--;
//         }
//     }

//     print(arr , n);
// }

// int main(){
//     int arr[8]= {1,4,1,3,2,4,3,7};
//    countSort(arr , 8);

//     return 0;
// }

#include <iostream>
#include <climits>
using namespace std;

void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

void countSort(int arr[], int n){

    int minVal = INT_MAX , maxVal = INT_MIN;

    // find min and max
    for(int i=0;i<n;i++){
        minVal = min(minVal , arr[i]);
        maxVal = max(maxVal , arr[i]);
    }

    int range = maxVal - minVal + 1;

    int freq[range] = {0};

    // store frequency
    for(int i=0;i<n;i++){
        freq[arr[i] - minVal]++;
    }

    int j = 0;

    // rebuild sorted array
    for(int i=0;i<range;i++){
        while(freq[i] > 0){
            arr[j++] = i + minVal;
            freq[i]--;
        }
    }

    print(arr , n);
}

int main(){

    int arr[8] = {1,4,1,3,2,4,3,7};
    int n = 8;

    countSort(arr , n);

    return 0;
}