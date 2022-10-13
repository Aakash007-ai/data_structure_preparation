class Solution {
public:
//     char nextGreatestLetter(vector<char>& letters, char target) {
        
//     }

    //  char nextGreatestLetter(vector<char> letters, char target) {
    //     int lo = 0, hi = letters.size();
    //     while (lo < hi) {
    //         int mi = lo + (hi - lo) / 2;
    //         if (letters[mi] <= target) lo = mi + 1;
    //         else hi = mi;
    //     }
    //     return letters[lo % letters.size()];
    // }


     char nextGreatestLetter(vector<char>& letters, char target) {
        int s=0,e=letters.size()-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(letters[mid]>target){
                e=mid-1;
            }
            else{//(letters[mid]<target){
                s=mid+1;
            }
        }
        char ans;
        if(s==letters.size() || e==-1){
            ans=letters[0];
        }
        else{
            ans=letters[s];
        }
        return ans;
    }
    

    //    char nextGreatestLetter(vector<char>& letters, char target) {
    //     int s=0,e=letters.size()-1;
    //     while(s<=e){
    //         int mid=(s+e)/2;
    //         if(letters[mid]==target){
    //             if(mid==letters.size()-1) return letters[0];
    //             else if( letters[mid+1]>target ) return letters[mid+1];
    //             else s=mid+1;
    //         }
    //         else if(letters[mid]<target) s=mid+1;
    //         else if(letters[mid]>target) e=mid-1;
    //     }
    //     if(s>=letters.size()) return letters[0];
    //     if(s==1 && e==-1) return letters[0];

    //     return letters[s];
    // }
};