#include<bits/stdc++.h>
using namespace std;
//for duplicates we jsut traverse whole array and check which one comes earlier
//so we have to store and find it in least time so using hashing either by unordered_map or unordered_set
// find time = ?
// insert time = ?
// space o(n) time o(n)
// vector<int> findDuplicates(vector<int>& nums) {
//     unordered_set<int> st;//given it appears once or twice
//     vector<int> ans;
//     for(auto it:nums){
//         if(st.count(it)>0){ 
//             ans.push_back(it);
//             continue;
//         }
//         st.insert(it);
//     }
//     return ans;
// }
//give a try for approach having spacew o(1)

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(auto it:nums){
            if(nums[abs(it)-1]>0){
                nums[it-1]*=-1;
            }
            else{
                ans.push_back(abs(it));
            }
        }
        return ans;
    }
};