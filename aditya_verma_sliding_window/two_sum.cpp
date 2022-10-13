#include<bits/stdc++.h>
using namespace std;
//use provided data structure to reduce time limit and make wase
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            auto it=mp.find(nums[i]);
            if(it!=mp.end()){
                ans.push_back(it->second);
                ans.push_back(i);
                break;
            }
            mp.insert(target-nums[i],i);
        }
        return ans;
    }
};