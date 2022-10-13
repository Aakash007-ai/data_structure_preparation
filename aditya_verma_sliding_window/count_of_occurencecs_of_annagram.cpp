#include<bits/stdc++.h>
using namespace std;

int countAnagram(string s,string a){
    int i=0,j=0;
    unordered_map<char,int> mp;
    for(int i=0;i<a.size();i++){
        mp[a[i]]++;
    }
    int ans=0;
    int count=a.size();
    while(j<s.size()){
        if(j<a.size()){
            auto it=mp.find(s[j]);
            if(it!=mp.end()){
                mp[s[j]]--;
                count--;
            }
            j++;
            if(j-i+1==a.size()){
                if(count==0){
                    ans++;
                }
            }
        }
        else{
            auto it=mp.find(s[i]);
            if(it!=mp.end()){
                mp[s[i]]++;
                i++;
                count++;
            }
            it=mp.find(s[j]);
            if(it!=mp.end()){
                mp[s[j]]--;
                count--;
            }
            if(count==0){
                ans++;
            }
            j++;
        }
    }
    return ans;
      
}
int main(){
    string s="forxxorfxrof";
    string a="for";
    cout<<countAnagram(s,a);
}