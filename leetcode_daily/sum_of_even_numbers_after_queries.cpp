#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        for(auto it:queries){
            nums[it.back()]=nums[it.back()]+it.front();
        }
        vector<int> ans;
        for(auto it:nums){
            
        }
    }
};