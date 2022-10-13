#include<bits/stdc++.h>
using namespace std;
int maxSumofsubArrayOfSizeK(int a[],int n,int k){
    int i=0,j=0;
    int sum=0;
    if(n>=k){
    while(j-i <k){
        sum=sum+a[j];
        j++;
        }
    }
    else{
        return 0;
    }
    int maxs=sum;
    while(j<n){//sizeof(a)/sizeof(a[0])){//how we find size of array passed to function
        //sum=sum+a[j];
        maxs=max(maxs,sum);
        sum=sum-a[i]+a[j];
        i++;j++;
        
    }
    return maxs;
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