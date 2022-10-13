#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> & nums,int target){
    int n=nums.size();
    unordered_map<int,int> mp;
    vector<int> ans;
    for(int i=0;i<n;i++){
        auto it=mp.find(nums[i]);
        if(it!=mp.end()){
            //51 ms ans={it->second,i}
            //73 ms for below
            ans.push_back(it->second +1);
            ans.push_back(i+1);
        }
        mp.insert(target-nums[i],i);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> num(n);
    for(int i=0;i<n;i++)
        cin>>num[i];
    int t;
    cin>>t;
    vector<int> ans=twoSum(num,t);
    for(auto i:ans)
        cout<<i;
}