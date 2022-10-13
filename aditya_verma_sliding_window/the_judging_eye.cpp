#include<bits/stdc++.h>
using namespace std;

int judging_eye(int x,int y,int a,int b){
    int cmp2=min(abs(x-b)+abs(y-a),abs(y-x));
    int cmp1= min(abs(x-a)+abs(y-b),abs(y-x));
    return min(cmp1,cmp2);
}
int main(){
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    cout<<judging_eye(x,y,a,b);
}
// class the_judging_eye
// {
// private:
//     /* data */
// public:
//     the_judging_eye(/* args */);
//     ~the_judging_eye();
// };

// the_judging_eye::the_judging_eye(/* args */)
// {
// }

// the_judging_eye::~the_judging_eye()
// {
// }
