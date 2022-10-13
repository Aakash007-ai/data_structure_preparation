// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr={1,1,2,3,3,4,6};
//     int x;
//     int n=arr.size();
//     cout<<n<<"\n";
//     cout<<arr[0]<<" "<<arr[1];
//     int j=0;
//     vector<int> temp;
//     for(int i=0;i<n-1;i++){
//         if(arr[i] != arr[i+1]) temp.push_back(arr[i]);
//     }
//     for(int i=0;i<temp.size();i++){
//         arr[i]=temp[i];
//         cout<<temp[i]<<" ";
//     }
// }
// 1 2 3 4

// int fun(3,4){
//     st<int> st;
//     st.push(3);
//     st.push(4);
//     int ele1=3
//     ele3=4
//     st.push(7) 

#include<bits/stdc++.h>
using namespace std;
int solve (string S){ 
    string find="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n=S.size();
    vector<vector<int>>v(n+1,vector<int>(27,INT_MAX));
    int ans=INT_MAX;
    for(int i=0;i<n;i++) v[i][0]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=26;j++){
            if(v[i-1][j]!=INT_MAX) v[i][j]=1+v[i-1][j];
            if(S[i-1]==find[j-1]){
              if(v[i-1][j-1]!=INT_MAX){
                v[i][j] = min(v[i][j],1+v[i-1][j-1]);
            }
            }
            if(j==26) ans=min(ans,v[i][26]);
        }
    }
    return ans;
}
int main() { ios::sync_with_stdio(0);
cin.tie(0); string S;
cin>>S; int out_;
out_ = solve(S);
cout << out_;
}


// #include<bits/stdc++.h>
// using namespace std;

// int solve(string s){
//     int count=0;
//     vector<int> aindex;
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='A'){
//             aindex.push_back(i);
//         }
//     }
//     for(auto it:aindex){
//         for(int)
//     }
// }
// int main(){
//     string s;
//     cin>>s;
//     cout<<solve(s);
// }