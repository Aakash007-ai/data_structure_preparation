#include<bits/stdc++.h>
using namespace std;

// // CompareHeapElements is used for modifying the comparator of priority queue, as per question
// struct CompareHeapElements {
//     bool operator()(pair<int,int> const& p1, pair<int,int> const& p2)
//     {
//         if(p1.first<p2.first){
//             return true;
//         }
//         else if(p1.first==p2.first && p1.second<p2.second){
//             return true;
//         }
//         return false;
//     }
// };

// class Solution {
//     // calculate the soldier count using binary search
//     int calculateSoldierCount(vector<int>& v) {
//         int l=0; int h=v.size()-1;
//         while(l<=h) {
//             int mid=l+(h-l)/2;
//             if(v[mid]==0) {
//                 h=mid-1;
//             } else {
//                 l=mid+1;
//             }
//         }
//         return l;
//     }
    
// public:
//     vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
//         // We will use max_heap of pairs because we need the top k minimum strength row index(s)
//         // each element of max_heap will contain {each row soldier count, that row index}.
//         priority_queue<pair<int,int>, vector<pair<int,int>>,CompareHeapElements> max_heap;
        
//         // Iterating the matrix and find the total number of soldiers in each row,
//         // then push {soldier_count,row_index} to the min_heap
//         for(int i=0;i<mat.size();++i){
//             max_heap.push({calculateSoldierCount(mat[i]),i});
//             if(max_heap.size()>k){
//                 max_heap.pop();
//             }
//         }
        
//         vector<int>ans;
//         while(max_heap.size()){ // pushing the top k smallest elements of min_heap to "ans"
//             ans.push_back(max_heap.top().second);
//             max_heap.pop();
//         }
		
//         reverse(ans.begin(), ans.end());
//         return ans;
//     }
// };


class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& nums, int k) {
        int n=nums.size(),m=nums[0].size();
        vector<int> count;
        for(int i=0;i<nums.size();i++){
            int ind=upper_bound(nums[i].rbegin(),nums[i].rend(),0)-nums[i].rbegin();
            if(ind== 0) count.push_back(m-1); //if all are 1 then it point to first index i.e 0
            else if(ind==m) count.push_back(0); //if all are 0 then it point to end of index i.e m
            else{//if there are some 0 and some 1
                count.push_back(m-ind);
            }
        }
        priority_queue<pair<int,int>> pq;
        for(int i=1;i<nums.size();i++){
            if(count[i-1]<=count[i]){
                pq.push({count[i-1],i-1});
            }
        }
        vector<int> ans;
        while(k--){
            ans.push_back(pq.top().second);
            cout<<pq.top().second<<"\t";
            pq.pop();
        }
    }
};