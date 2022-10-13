#include<bits/stdc++.h>
using namespace std;//3 size bfs is useful when we have to just traverse upto end points or on valid points like level order
class Solution {
public:
    vector<pair<int,int>> dir={{0,1},{1,0},{-1,0},{0,-1}};
    int visitPath(vector<vector<int>> &grid,int i,int j,int r,int c){
        queue<pair<int,int>> q;
        q.push({i,j});
        int count=1;
        grid[i][j]=0;
        while(!q.empty()){
            int sz=q.size();
            for(int i=0;i<sz;i++){
                auto node=q.front();q.pop();
                grid[node.first][node.second]=0;
                for(auto it:dir){
                    int nx=node.first+it.first;
                    int ny=node.second+it.second;
                    if(nx>=0 && nx<r && ny>=0 && ny<c && grid[nx][ny]){
                        count++;
                        grid[nx][ny]=0;
                        q.push({nx,ny});
                    }
                }
            }
        }
        return count;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int ans=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]){
                    int area=visitPath(grid,i,j,r,c);
                    ans=max(area,ans);
                }
            }
        }
        return ans;
    }
};