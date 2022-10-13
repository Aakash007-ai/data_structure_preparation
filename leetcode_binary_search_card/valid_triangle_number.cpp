#include<bits/stdc++.h>//try o(n2) 
using namespace std;
// o(n^3)
// int triangleNumber(vector<int>& nums) {
//     sort(nums.begin(),nums.end());
//     int count=0;
//     for(int i=0;i<nums.size()-2;i++){
//         for(int j=+1;j<nums.size()-1;j++){
//             for(int k=j+1;k<nums.size();k++){
//                 if(nums[i]+nums[j]>nums[k]) count++;
//             }
//         }
//     }
//     return count;  
// }
//o(n2 logn)
// int binarySearch(vector<int> &nums, int l, int r, int x) {
//     while (r >= l && r < nums.size()) {
//         int mid = (l + r) / 2;
//         if (nums[mid] >= x)
//             r = mid - 1;
//         else
//             l = mid + 1;
//     }
//     return l;
// }
// int triangleNumber(vector<int>& nums) {
//     sort(nums.begin(),nums.end());
//     if(nums.size()<=2) return 0;
//     int count=0;
//     for(int i=0;i<nums.size()-2;i++){
//         int k=i+2;
//         for(int j=i+1;j<nums.size()-1 && nums[i]!=0;j++){
//             k=binarySearch(nums,k,nums.size()-1,nums[i]+nums[j]);
//             count+=k-j-1;
//         }
//     }
//     return count;  
// }
class Solution {
    int binarySearch(vector<int> &nums, int l, int r, int x) {
        while (r >= l && r < nums.size()) {
            int mid = (l + r) / 2;
            if (nums[mid] >= x)
                r = mid - 1;
            else
                l = mid + 1;
        }
        return l;
    }
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        for(int i=0;i<nums.size()-2;i++){
            int k=i+2;
            for(int j=+1;j<nums.size()-1 && nums[i]!=0;j++){
                k=binarySearch(nums,k,nums.size()-1,nums[i]+nums[j]);
                count+=k-j-1;
                // int k=upper_bound(nums.begin(),nums.end(),nums[i]+nums[j])-nums.begin();
                // if(k>j){
                //     if(k==nums.size() && nums[i]+nums[j]>nums[k]){
                //         count+=(k-j-1);
                //         continue;
                //     }
                //     count+=(k-j-1);
                // }
            }
        }
        return count;  
    }
};
// https://leetcode.com/problems/valid-triangle-number/solution/