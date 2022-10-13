#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // int maxDistance(vector<int>& nums1, vector<int>& nums2) {
    //     int mx=INT_MIN;
    //     for(int i=0;i<nums2.size();i++){
    //         int ind=upper_bound(nums1.rbegin(),nums1.rend(),nums2[i])-nums1.rbegin();
    //         if(ind>=0 && ind<=i) mx=max(mx,i-ind);
    //     }
    //     return mx;
    // }
};

// int maxDistance(vector<int>& nums1, vector<int>& nums2) {  
//     reverse(nums2.begin(),nums2.end());
//     int ans = 0;
//     for(int i=0;i<nums1.size();++i){
//         auto it = lower_bound(nums2.begin(),nums2.end(),nums1[i]) - nums2.begin();  //Finds first element greater than or equal to nums1[i]
//         int j = nums2.size() - 1 - it; //Index of the found element in the original array
//         if(i<=j) ans = max(ans,j-i); //Update distance 
//     }
//     return ans;
    
// }