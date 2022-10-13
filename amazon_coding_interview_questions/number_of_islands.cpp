#include<bits/stdc++.h>//in bfs where we encounter next path just change grid value where we found path
using namespace std;
class Solution {
public:
//     int numIslands(vector<vector<char>>& grid) {
        
//     }
        vector<pair<int,int>> dir={{1,0},{0,1},{-1,0},{0,-1}};
    void bfs(int i,int j,vector<vector<char>> &grid){
        grid[i][j]='0';
        queue<pair<int,int>> q;
        q.push({i,j});
        while(!q.empty()){
            int sz=q.size();
            for(int i=0;i<sz;i++){
                auto node=q.front();q.pop();
                for(auto it:dir){
                    int nx=node.first+it.first;
                    int ny=node.second+it.second; 
                    if(nx>=0 && nx<grid.size() && ny>=0 && ny<grid[0].size() && grid[nx][ny]=='1'){
                        grid[nx][ny]='0';
                        q.push({nx,ny});
                    }
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1') {
                    count++;
                    bfs(i,j,grid);
                }
            }
        }
        return count;
    }
};