#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int j=0;
        vector<int> k;
        for(char c : s){
            if (isalpha(c)) 
                k.push_back(tolower((c)));
            else if (isdigit(c))  
                k.push_back(tolower((c)));
        }  
        for(int h=0;h<k.size()/2;h++){
            if(k[h]!=k[k.size()-h-1]) return false;
        }
        
        return true;
    }
    // bool isPalindrome(string s) {
    //     int i=0,j=s.size()-1;
    //     while(i!=j){
    //         if(s[i]>=97 && s[i]<=122){
    //             if(s[j]>=97 && s[j]<=122){
    //                 if(s[i]==s[j]){
    //                     i++;j++;
    //                     continue;
    //                 }
    //                 else{
    //                     break;
    //                 }
    //             }
    //             else if(s[j]>=65 && s[j]<=90){
    //                 s[j]+=32;
    //             }
    //         }
    //         else{
                
    //         }
            // if(s[i]>=65 && s[i] <=90){
            //     s[i]+=32;
            //     if(s[j]>=65 && s[j] <=90){
            //     s[i]+=32;
            // }
            // if(s[i]<65 || s[i] >122){
            //     i++;
            // }
            // if(s[i]>90 && s[i]<97){
            //     i++;
            // }
            
      //  }       
    //}
};