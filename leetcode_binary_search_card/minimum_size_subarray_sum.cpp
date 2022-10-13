#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // for(int i=1;i<nums.size();i++){
        //     nums[i]+=nums[i-1];
        // }
        int i=0,j=0;
        int mn=INT_MAX;
        int sum=nums[i];
        while(i<nums.size()){
            if(sum<target){
                ++i;
                if(i<nums.size()) sum+=nums[i];
                if(sum>=target) mn=min(mn,i-j+1);
            }
            else{
                sum-=nums[j];
                j++;
                if(sum>=target) mn=min(mn,i-j+1);
            }
        }
        if(mn=INT_MAX) return -1;
        return mn;
    }
};