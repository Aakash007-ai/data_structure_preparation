// given a 2d array binary grid representing water,0 and land,1
// find number of distinct island (island is considered same if and only if one island can be translated
// not rotated or reflected  equal to each other)
#include<bits/stdc++.h>//premium leetcode
using namespace std;
class Solution{
    private:
    string computePath(vector<vector<int>> &grid,int i,int j,int m,int n,string direction){
        if(i<0 || j <0 || i>=m || j>=n || grid[i][j]==0 ) return "o";
        grid[i][j]=0;
        string left=computePath(grid,i,j-1,m,n,"l");
        string right=computePath(grid,i,j-1,m,n,"r");
        string up=computePath(grid,i,j-1,m,n,"u");
        string down=computePath(grid,i,j-1,m,n,"d");
        return direction+left+right+up+down;
    }
    //x=start
    //o=out of bound or 0
    //l=left
    //u=up
    //r=right
    //d=down
    public:
    int numDistinctIslands(vector<vector<int>> &grid){
        int m=grid.size(),n=grid[0].size();
        if(n==0) return 0;
        unordered_set<string> st;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]){
                    string path=computePath(grid,i,j,m,n,"x");
                    st.insert(path);
                }
            }
        }
        return st.size();
    }
};