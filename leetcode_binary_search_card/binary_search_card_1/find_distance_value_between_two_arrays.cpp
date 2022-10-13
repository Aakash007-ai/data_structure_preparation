#include<bits/stdc++.h>
using namespace std;

//study upper bound lower bound
// upper bound
// int findTheDistanceValue(vector<int>& A, vector<int>& B, int d) {
//     sort(begin(B), end(B));
//     int ans = 0;
//     for (int n : A) {
//         if (upper_bound(begin(B), end(B), n + d) == lower_bound(begin(B), end(B), n - d)) ++ans;
//     }
//     return ans;
// }


class Solution {
public:
    // int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
    //     sort(arr1.begin(), arr1.end());
    //     sort(arr2.begin(),arr2.end());
    //     int n=arr2.size();
    //     int count=0;
    //     for(int i=0;i<arr1.size();i++){
    //     	int s=0,e=n-1;
    //     	while(s<=e){
    //     		int mid=(s+e)/2;
    //     		if(abs(arr1[i]-arr[mid])<=d) break;
    //     		else e=mid-1;
    //     	}
    //         if(s<=e) count++;
    //     }
    //     return arr1.size()-count;
    // }
};