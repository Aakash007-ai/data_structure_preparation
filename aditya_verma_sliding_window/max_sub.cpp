#include<bits/stdc++.h>
using namespace std;
int maxSumofsubArrayOfSizeK(int a[],int n,int k){
    int i=0,j=0;
    int sum=0;
    int mx=0;
    while(j<n){
        if(j<k){
            sum+=a[j];
            j++;
            if(j==k){
                mx=max(sum,mx);
            }
        }else{
            sum-=a[i];
            i++;
            sum+=a[j];
            j++;
            mx=max(mx,sum);

        }
    }
    return mx;
}
int main(){
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    cin>>k;
    cout<<maxSumofsubArrayOfSizeK(a,n,k);
}