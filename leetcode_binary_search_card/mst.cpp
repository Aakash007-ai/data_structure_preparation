#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>adj[n];
    int sum = 0;
    for(int i=0;i<m;i++){
        int x,y,w;
        cin>>x>>y>>w;
        sum += w;
        adj[x-1].push_back({y-1,w});
        adj[y-1].push_back({x-1,w});   
    }
    vector<int>vis(n,0);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push({0,0});
    int count = 0;
    while(pq.size()>0){
        pair<int,int>cur = pq.top();
        pq.pop();
        int weight = cur.first;
        int node = cur.second;
       if(vis[node]==1) continue;
        vis[node] = 1;
        sum -= weight;
        count++;
        if(count == n) break;
        for(auto u : adj[node]){
            int nd = u.first;
            int w = u.second;
            if(vis[nd]==1) continue;
            pq.push({w,nd});   
        }   
    } 
    cout<<sum;
    return 0;
}
