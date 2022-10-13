#include<bits/stdc++.h>//explore more methods
using namespace std;
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        for(auto it:nums1) mp[it]++;
        vector<int> ans;
        for(auto it:nums2){
            auto itr=mp.find(it);
            if(itr!=mp.end()){
                if(itr->second >0){
                    ans.push_back(it);
                    itr->second=itr->second-1;
                }
            }
        }
        return ans;
    }
};