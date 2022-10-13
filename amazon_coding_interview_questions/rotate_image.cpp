#include<bits/stdc++.h>
using namespace std;
//rotation by 90 degree
// Input: matrix => 
// 5  1  9  11 
// 2  4  8  10
// 13 3  6  7
// 15 14 12 16
// Output:>
// 15 13 2 5 
// 14 3 4  1
// 12 6 8  9
// 16 7 10 11

    // swap(matrix[a][a+i],matrix[a+i][b]);
    //             swap(matrix[a][a+i],matrix[b][b-i]);
    //             swap(matrix[a][a+i],matrix[b-i][a]);
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int a=0;
        int b=matrix.size()-1;
        while(a<b){
            for(int i=0;i<b-a;i++){
                swap(matrix[a][a+i],matrix[a+i][b]);
                swap(matrix[a][a],matrix[b][a]);
                swap(matrix[b][a],matrix[b][b]);
            }
            a++;b--;
        }
    }
};