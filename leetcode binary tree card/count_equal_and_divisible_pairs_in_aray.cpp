#include<bits/stdc++.h>
using namespace std;
int countPairs(vector<int>& nums, int k) {
    //unordered_set<int> st;
    //auto it=k.find(nums.begin(),nums.end());
    unordered_map<int,vector<int>> mp;
    //vector<int> dup={};
    int count=0;
    //unordered_set<int>::iterator it;
    unordered_map<int,vector<int>>::iterator it;
    for(int i=0;i<nums.size();i++){
        // auto val=st.find(nums[i]);
        it=mp.find(nums[i]);
        if(it !=mp.end()){
            // for(int i=0;i<it->second.size();i++){
            //     if(i*nums[i]==k){
            //         count++;
            //     }
            // }
            // if((it->second*i)/k){
            //     ++count;
            // }
            for(auto j:it->second){
                if(j*i%k==0){
                    count++;
                }
            }
        }
        mp[nums[i]].push_back(i);
        //st.insert(nums[i]);
    }
    return count;
}
//1,2,3,4], k = 1
int main(){//3,1,2,2,2,1,3], k = 2
    //vector<int> sam={3,1,2,2,2,1,3};
    vector<int> sam={1,2,3,4,1};
    cout<<countPairs(sam,2);
}