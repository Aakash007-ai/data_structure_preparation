
// test with new test case where start has 0 problem with end n-1

// [3,5,3,2,0]
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {// given already arr is mountain array low to high then low
        int n=arr.size();
        int s=1,e=n-1; //don't take that what we can't take so start with 1 index
        if(n==3 && arr[0]<arr[1] && arr[1]>arr[0]) return 1;
        while(s<=e){
            int mid=(s+e)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
            else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]) s=mid+1;
            else e=mid-1;
        }
        return 1;
    }
};