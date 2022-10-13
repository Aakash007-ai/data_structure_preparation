// Input: arr = [2,3,4,7,11], k = 5
// Output: 9
// Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]
// The 5th missing positive integer is 9.

// Input: arr = [1,2,3,4], k = 2
// Output: 6
// Explanation: The missing positive integers are [5,6,7,...]. 
// The 2nd missing positive integer is 6

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
     //bool run=True;
        // int i=1;
        // int j=0;
        // while(k){
        //     if(j< arr.size() && arr[j]==i){
        //         j++;i++;
        //         continue;
        //     }
        //     i++;
        //     k--;
        // }
        // return --i;
             if(k < arr[0])
            return k;
        int low(0), high(arr.size());
        while(low < high)
        {
            int mid = low + ((high - low) >> 1);
            if(arr[mid] - mid - 1 < k)
                low = mid + 1;
            else
                high = mid;
        }
        return low + k;
    }
};