class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        int s=1,e=x;
        while(s<=e){
            int mid=s+(e-s)/2;
            //int mul=mid*mid;
            //if(mul==x) return mid;
            if(mid>x/mid) e=mid-1;
            else{
                if(mid+1 > x/(mid+1)) return mid;
                s=mid+1;
                // int next=(mid+1)*(mid+1);
                // if(next>x) return mid;
                // else if(next<x) s=mid+1;
                // else if(next==x) return mid+1;
            }
        }
        return 1;
    }
        
        
    // if (x == 0) return 0;
    // int left = 1, right =INT_MAX;
    // while (true) {
    //     int mid = left + (right - left)/2;
    //     if (mid > x/mid) {
    //         right = mid - 1;
    //     } else {
    //         if (mid + 1 > x/(mid + 1))
    //             return mid;
    //         left = mid + 1;
    //     }
    // }    
    // }
};