#include<bits/stdc++.h>
using namespace std;
int minCost(string colors, vector<int>& neededTime) {
    // totalTime: total time needed to make rope colorful;
    // currMaxTime: maximum time of a balloon needed in this group.
    int totalTime = 0, currMaxTime = 0;
    // For each balloon in the array:
    for (int i = 0; i < colors.size(); ++i) {
        // If this balloon is the first balloon of a new group
        // set the currMaxTime as 0.
        if (i > 0 && colors[i] != colors[i - 1]) {
            currMaxTime = 0;
        }
        // Increment totalTime by the smaller one.
        // Update currMaxTime as the larger one.
        totalTime += min(currMaxTime, neededTime[i]);
        currMaxTime = max(currMaxTime, neededTime[i]);
    }
    // Return totalTime as the minimum removal time.
    return totalTime;
}
class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int i=0,j=0,total=0;
        // priority_queue<int,vector<int>,greater<int>> pq;
        // int sum=0;
        // pq.push(neededTime[0]);
        // for(int i=1;i<colors.size();i++){
        //     if(colors[i]==colors[i-1]){
        //         pq.push(neededTime[i]);
        //     }
        //     else{
        //         if(pq.size()>1){
        //             while(pq.size()!=1){
        //                 sum+=pq.top();
        //                 pq.pop();
        //             }
        //         }
        //         pq.pop();
        //         pq.push(neededTime[i]);
        //     }
        // }
        // if(pq.size()>1){
        //     while(pq.size()!=1){
        //         sum+=pq.top();
        //         pq.pop();
        //     }
        // }
        // return sum;
    }
};