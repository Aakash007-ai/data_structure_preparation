#include<bits/stdc++.h>
using namespace std;

// int* ordeal(int a,int b,int c){
//     int * ans=b-a
// }

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int p1=c-b;
    int p3=b-a;
    int mi,ma;
    if(p1>p3){
        if(p3>=2){
            mi=p3-1;
            ma=p1-1;
        }
        else{
           mi=0;
           ma=p1-1; 
        }
    }
    else if(p3>p1){
        if(p1>=2){
            mi=p1-1;
            ma=p3-1;
        }
        else{
            mi=0;
            ma=p3-1;
        }
    }
    else if(p3==p1){
        if(p3==1){
            mi=0;
            ma=0;
        }
        else{
            mi=p3-1;
            ma=p1-1;
        }
    }
    cout<<mi<<"\n"<<ma;
}