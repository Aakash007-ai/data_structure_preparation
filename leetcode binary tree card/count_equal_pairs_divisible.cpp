#include<bits/stdc++.h>
using namespace std;
int countPairs(vector<int> &nums,int k){
    int ans=0;
    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        if(mp.find(nums[i])!=mp.end()){
            if(mp.find(nums[i])->second * j /k){
                ++ans;
            }
        }
    }
}