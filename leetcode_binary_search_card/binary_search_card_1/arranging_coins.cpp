// 7
// 1
// 1 1
// 1 1 1
// 1
// 3 ans upto 3 row we get ans 
class Solution {
public:
    // int arrangeCoins(int n) {
    //     int i=0;
    //     while(n>=i){
    //         n-=i;
    //         i++;
    //     }
    //     return --i;
    // }
       int arrangeCoins(int n){
        long s=0,e=n;
        while(s<=e){
            long mid=s+(e-s)/2;
            long long sum= mid*(mid+1)/2;
            if(sum==n) return (int)mid;
            else if(sum>n) e=mid-1;
            else s=mid+1;
        }
        return (int)e;
    }
//     long left = 0, right = n;
//     long k, curr;
//     while (left <= right) {
//       k = left + (right - left) / 2;
//       curr = k * (k + 1) / 2;

//       if (curr == n) return (int)k;

//       if (n < curr) {
//         right = k - 1;
//       } else {
//         left = k + 1;
//       }
//     }
//     return (int)right;
//   }
};