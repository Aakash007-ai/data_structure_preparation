#include<bits/stdc++.h>
using namespace std;
vector<long long> sumOfThree(long long num) {
    vector<long long> ans={};
    if(num<6)
        return ans;
    
    long long y=(num-3)/3;
    if(y-int(y)==0&&y>=0){
        ans.push_back(y);
        ans.push_back(y+1);
        ans.push_back(y+2);
    }

    return ans;

}
int main(){
    long long num=4;
    vector<long long> ans=sumOfThree(num);
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
}