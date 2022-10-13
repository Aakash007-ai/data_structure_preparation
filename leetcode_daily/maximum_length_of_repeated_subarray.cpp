#include<bits/stdc++.h>
using namespace std;
//like longest common subsequence or subarray
//max(i+1,j  ,  i,j+1)
// also if i==j solve for i+1,j+1
// class Solution {
// public:
// int ans=0;
//     int solve(vector<int> &nums1,vector<int> &nums2,int i,int j){
//         if(i==0 || j==0) return 0;
//         solve(i-1,j) solve(i,j-1)
//         if(nums1[i-1]==nums2[j-1]) 1+solve(i-1,j-1)
//         //return nums1[i]==nums2[j]?1+solve(nums1,nums2,i-1,j-1):max(solve(nums1,nums2,i-1,j),solve(nums1,nums2,i,j-1));
//     }
//     int findLength(vector<int>& nums1, vector<int>& nums2) {
//         return solve(nums1,nums2,nums1.size(),nums2.size());
//     }
// };

//tabulation tp_down
// class Solution {
// public:
// 	vector<vector<int>>dp;
// 	int ans = 0;
// 	int findLength(vector<int>& A, vector<int>& B) {
// 		dp.resize(size(A), vector<int>(size(B), -1));
// 		solve(A, B, 0, 0);
// 		return ans;
// 	}
// 	int solve(vector<int>& A, vector<int>& B, int i, int j) {
// 		if(i >= size(A) || j >= size(B)) return 0;
// 		if(dp[i][j] != -1) return dp[i][j];
// 		solve(A, B, i+1, j), solve(A, B, i, j+1);
// 		dp[i][j] = A[i] == B[j] ? solve(A, B, i+1, j+1) + 1 : 0;  // store the result for state (i, j) for future
// 		ans = max(ans, dp[i][j]);
// 		return dp[i][j];
// 	}
// };


// class Solution {
// public:
//    int findLength(vector<int>& A, vector<int>& B) {
//    	int m = size(A), n = size(B), ans = 0, dp[m+1][n+1]; 
//    	memset(dp, 0, sizeof dp);
//    	for(int i = m-1; ~i; i--) 
//    		for(int j = n-1; ~j; j--) 
//    			dp[i][j] = A[i-1] == B[j-1] ? dp[i+1][j+1] + 1 : 0,
//    			ans = max(ans, dp[i][j]);
   		
//    	return ans;
//    }
// };

        // int i=0;
        // while(i<nums1.size()){
        //     int j=0;
        //     int count=0;
        //     while(j<nums2.size()){
        //         if(nums1[1]==nums2[j]){
        //             count++;
        //         }
        //     }
        // }