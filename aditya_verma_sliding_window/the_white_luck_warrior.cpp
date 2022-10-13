#include<bits/stdc++.h>
using namespace std;

int max_area(int fir[],int sec[]){
    int ytop_r=max(fir[3],sec[3]);
    int xtop_r=max(fir[2],sec[2]);

    int x_left=min(fir[0],sec[0]);
    int y_left=min(fir[1],sec[1]);

    int l=max((xtop_r-x_left),(ytop_r-y_left));
    return l*l;
}

int main(){
    int f[4],sec[4];
    for(int i=0;i<4;i++)
        cin>>f[i];
    
    for(int i=0;i<4;i++)
        cin>>sec[i];

    cout<<max_area(f,sec);
}