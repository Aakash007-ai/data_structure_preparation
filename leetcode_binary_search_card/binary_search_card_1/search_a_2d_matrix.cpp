#include<bits.stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int midc=(c-1)/2;
        int s=0;e=r-1;
        while(s+1<e){
        	int midr=(s+e)/2;
        	if(matrix[midr][midc]==target) return true;
        	else if(matrix[midr][midc]<target) s=mid;
        	else if(matrix[midr][midc]>target) e=mid;
        }
        bool bi=binary_search(matrix[s].begin(),matrix[s].end(),target);
        if(bi) return true;
        bool bi2=binary_search(matrix[e].begin(),matrix[e].end(),target());
        return bi2;
    }
};