#include<bits/stdc++.h>
using namespace std;

vector<int> firstNegative(int a[],int n,int k){
    int i=0,j=0;
    vector<int> ans;
    queue<int> q;
    while(j<n){
        if(j<k){
            if(a[j]<0){
                q.push(a[j]);
                }
            j++;
            if(j==k){
                if(!q.empty())
                    ans.push_back(q.front());
                else
                    ans.push_back(0);
                }
        }
        else{
            if(a[i]<0){
                q.pop();
            }
            if(a[j]<0){
                q.push(a[j]);
            }
            if(!q.empty()){
                    ans.push_back(q.front());

                }else{
                    ans.push_back(0);
                }
             i++;
             j++;       
                

        }
    }
    return ans;
}
int main(){
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    cin>>k;
vector<int> v=firstNegative(a,n,k);

cout<<v[4];
}