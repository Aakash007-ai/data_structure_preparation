// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
//     int firstBadVersion(int n) {
        
//     }
        int firstBadVersion(int n) {
       int s=1;int e=n;
        while(s<=e){
            //long long mid=(s+e)/2;
            int mid=s+(e-s)/2;
            if(isBadVersion(mid)==true){
                e=mid-1;
            }
            else if(isBadVersion(mid)==false){
                s=mid+1;
            }
        }
        return e+1;
    }
};