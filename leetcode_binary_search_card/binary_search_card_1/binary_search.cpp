#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
    	int n=nums.size();

    	int s=0,e=n-1;
    	while(s<=e){ // = because when it point to same index s=e=mid
    		int mid=(s+e)/2;
    		if(nums[mid]==target)
    			return mid;
    		else if(nums[mid]<target)
    			s=mid+1;
    		else if(nums[mid]>target)
    			e=mid-1;
    	}
    	return -1;
    }
};