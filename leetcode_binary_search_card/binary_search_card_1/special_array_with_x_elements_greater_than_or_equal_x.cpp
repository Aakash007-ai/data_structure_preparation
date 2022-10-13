#include<bits/stdc++.h>//try this again
using namespace std;
// o(n)
// int specialArray(vector<int> &nums) {
//     sort(nums.begin(),nums.end());
//     for(int i = 0; i < nums.size(); i++) {
//         int n = nums.size()-i;
//         bool cond1 =  n<=nums[i];
//         bool cond2 = (i-1<0) || (n>nums[i-1]);
//         if (cond1 && cond2) return n;
//     }
//     return -1;
// }

// convert o(n) to log(n)