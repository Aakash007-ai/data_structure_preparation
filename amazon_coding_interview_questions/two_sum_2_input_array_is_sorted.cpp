#include<bits/stdc++.h>
using namespace std;
//multiple ways to do it
//using hashing storing target-numbers[i] and match in rest of elements
//using n log n traverse n and continuously finding lower_bound(target-numbers[i])
//using 2 pointers
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        while(i<j){
            int sum=numbers[i]+numbers[j];
            if(sum==target) return {i,j};
            else if(sum<target) i++;
            else j--;
        }
    }
};