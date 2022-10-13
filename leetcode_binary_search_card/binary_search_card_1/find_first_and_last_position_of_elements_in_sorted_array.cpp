// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]

// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]

// nums = [], target = 0
// Output: [-1,-1]


class Solution {
public:
//     vector<int> searchRange(vector<int>& nums, int target) {
        
//     }
        vector<int> searchRange(vector<int>& nums, int target) {
        auto low = lower_bound(nums.begin(),nums.end(),target);
        auto up = upper_bound(nums.begin(),nums.end(),target);
        
        if(low == nums.end() || *low != target)    return {-1,-1};
        
        int first = low - nums.begin();
        int last = up - nums.begin()-1;
        
        return {first ,last};
    }
};