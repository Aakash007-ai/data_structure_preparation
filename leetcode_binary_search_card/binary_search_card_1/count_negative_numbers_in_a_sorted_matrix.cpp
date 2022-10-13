#include<bits/stdc++.h>
using namespace std;
int countNegatives(vector<vector<int>>& grid) {
    int ans(0);

    // Brute Force: O(mn) - check if negative
    for (const vector<int>& row: grid)
        for (const int& i: row)
            if (i < 0) ans++;
    return ans;
    
    // Binary Search: O(m lg(n)) or equivalently O(n lg(m)) - look for break point of each row / column
    for (const vector<int>& row: grid)
        ans += upper_bound(row.rbegin(), row.rend(), -1) - row.rbegin();
    return ans;
    
    // Search Break Points: O(m + n) - traverse from upper right to lower left
    int m(grid.size()), n(grid[0].size()), r(0), c(n - 1);
    while (r < m) {
        while (c >= 0 && grid[r][c] < 0) c--;
        ans += n - c - 1;
        r++;
    }
    return ans;
}
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            int s=0,e=grid[i].size()-1;
            while(s<=e){
                int mid=(s+e)/2;
                if(grid[i][mid]<0) e=mid-1;
                else if(grid[i][mid]>=0) s=mid+1;
            }
            if(s<grid.size()) ans+=(grid[i].size()-s);
        }
        return ans;
    }
};