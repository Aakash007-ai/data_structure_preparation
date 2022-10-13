#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int target;cin>>target;
    int i=0,j=0;
    int mn=INT_MAX;
    while(i<nums.size()){
        cout<<"nums[i] is "<<nums[i]<<" ";
        if(nums[i]<target){
            ++i;
            if(i<nums.size()){ 
                nums[i]+=nums[i-1];
                cout<<" next nums[++i] is "<<nums[i]<<" ";
            }
            if(nums[i]>=target){ 
                mn=min(mn,i-j+1);
                cout<<"i-j+1 is "<<i-j+1<<" "<<"mn is "<<mn<<"\n";
            }
        }
        else{
            nums[i]-=nums[j];
            cout<<"decreased nums[i] is "<<nums[i]<<" ";
            j++;
            if(nums[i]>=target){ 
                mn=min(mn,i-j+1);
                cout<<"mn is "<<mn<<" i-j+1 is "<<i-j+1<<"\n"; 
            }
        }
    }
    if(mn=INT_MAX) cout<<-1;
    cout<< mn;
}