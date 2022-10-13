#include<bits/stdc++.h>//try using binary search
using namespace std;
//first check its divisiblity by 2 then verify its quotient/dividend
bool checkIfExist(vector<int>& arr) {
    unordered_set<int> set;
    for(int i=0;i<arr.size();i++){
        if(set.count(2*arr[i])>0 || ((arr[i]%2==0) && set.count(arr[i]/2)>0))
            return true;
        set.insert(arr[i]);
    }
    return false;
}

//adding ceil to get perfect divisble by 2 give wrong ans instead of this 
bool checkIfExist(vector<int>& arr) {
    unordered_map<int,int> mp;
    for(auto it:arr){
        if(mp.find((int)ceil(it/2.0))!=mp.end() || mp.find(it*2)!=mp.end()) return true;
        mp[it]++;
    }
    return false;
}

//binary search
// class Solution {
//     public boolean checkIfExist(int[] arr) {
//         Arrays.sort(arr);
//         int zeroCount = 0;
//         for (int x : arr) {
//             if (x != 0) {
//                 if (binarySearch(x, arr) && binarySearch(x*2, arr)) {
//                     return true;
//                 }
//             }
//             else {
//                 ++zeroCount;
//             }
//         }
//         return zeroCount >= 2;
//     }
    
//     public boolean binarySearch(int x, int[] nums) {
//         int start = 0;
//         int end = nums.length-1;
//         while (start <= end) {
//             int mid = (int)((start+end)/2);
//             if (nums[mid] < x) {
//                 start = 1 + mid;
//             }
//             else if (nums[mid] > x) {
//                 end = mid - 1;
//             }
//             else {
//                 return true;
//             }
//         }
//         return false;
//     }
// }