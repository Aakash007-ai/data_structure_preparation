// #include<bits/stdc++.h>//explore more approaches
// // https://leetcode.com/problems/find-k-closest-elements/discuss/1310981/Simple-Solutions-w-Explanation-or-All-Possible-Approaches-Explained!
// using namespace std;
// //brute force
// // create vector<pair<int,int>> store elemnts with abs difference with x and element 
// //sort array with diff if diff is same then based on next element
// class Solution {//find error in this type
// public:
//     static bool comparator(pair<int,int> A,pair<int,int> B){
//         if(A.first<B.first) return true;
//         if(A.first==B.first){
//             if(A.second<B.second) return true;
//         }
//         return false;
//     }
//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//         vector<pair<int,int>> vec;
//         for(auto it:arr){
//             vec.push_back({abs(it-x),it});
//         }
//         sort(vec.begin(),vec.end(),comparator);
//         vector<int> ans(vec.begin(),vec.begin()+k);
//         return ans;
        
//     }
// };

// //approach 1
//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//         //start,end ,comparison iterator
//         stable_sort(begin(arr), end(arr), [x](const auto a, const auto b){
//             return abs(a - x) < abs(b - x);});   // sort by distance from x});
//         arr.resize(k);                        // choose first k elements
//         sort(begin(arr), end(arr));           // sort the output in ascending order before returning
//         return arr; 
//     }
// //approach 2
//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//         int L = 0, R = size(arr)-1;
//         while (R - L >= k) 
//             if (x - arr[L] <= arr[R] - x) R--;
//             else L++;
//         return vector<int>(begin(arr) + L, begin(arr) + R + 1);
//     }
    
    