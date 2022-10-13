#include<bits/stdc++.h>
using namespace std;

vector<int> countMax(int a[],int n,int k){
    int j=0,i=0;//3 1 -1 2 6 3 7
    vector<int> ans;
    priority_queue<int> q;
    q.push(a[j]);
    j++;
    while(j<n){
        if(j<k){
            if(a[j]>q.top()){
            while(!q.empty()){
                q.pop();
            }}
            q.push(a[j]);
            j++;
            if(j==k){
                ans.push_back(q.top());
            }
        }
        else{
            if(a[j]>q.top()){
                while(!q.empty()){
                    q.pop();
                }
                q.push(a[j]);
                ans.push_back(q.top());
                i++;j++;
            }
            else if(a[i]==q.top()){
                q.pop();
                i++;
                ans.push_back(q.top());
                q.push(a[j]);
                j++;
            }
            else{
                ans.push_back(q.top());
                i++;
                j++;
            }
        }
    }
}

// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         vector<int> ans;
//         int i = 0;
//         int j = 0;
//         list<int> l;
//         if(k > nums.size()){
//             ans.push_back(*max_element(nums.begin(), nums.end()));
//             return ans;
//         }
//         while(j < nums.size()){
//             if(l.empty()){
//                 l.push_back(nums[j]);
//             }
//             else{
//                 while(!l.empty() && l.back() < nums[j]){
//                     l.pop_back();
//                 }
//                 l.push_back(nums[j]);
//             }
//             if(j - i + 1 < k)
//                 j++;
//             else if(j - i + 1 == k){
//                 ans.push_back(l.front());
//                 if(nums[i] == l.front())
//                     l.pop_front();
//                 i++;
//                 j++;
//             }
//         }
//         return ans;
//     }
// };






