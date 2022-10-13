#include<bits/stdc++.h>
using namespace std;//try and check o(1) space
//try for  o(1) space 
// loop over array make value 1 which are out of boundary [1 to n]
// iterater again over array and mark -ve at nums[abs(i)-1]  index
// final iteration first +ve no. is ans
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        vector<int> visited(n+2,0);
        for(auto it:nums){
            if(it>n+1) continue;
            if(it<0) continue;
            visited[it]=1;
        }
        for(int i=1;i<=n;i++){
            if(!visited[i]) return i;
        }
        return 1; 
    }
};