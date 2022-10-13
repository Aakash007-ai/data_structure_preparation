#include<bits/stdc++.h>
using namespace std;//vvimp
//instead of checking separate for lower and upper case 
//create a function which first take down character to lower case
// cout<<tolower('T');
// std::cout<<std::tolower('T', std::locale());
class Solution {
public:
bool isVowel(char ch){
    ch=tolower(ch,std::locale());
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        return true;
    }
    return false;
}
    string reverseVowels(string s) {
        //using 2 pointer
        int i=0,j=s.length()-1;
        while(i<j){
            if(isVowel(s[i])){
                if(isVowel(s[j])){
                    swap(s[i],s[j]); //swap takes s[i] as arefernce ************************
                    //or we swap manually
                    // char temp=s[i];
                    // s[i]=s[j];
                    // s[j]=temp;
                    // i++;j--;
                }
                else j--;
            }
            else i++;
        }
        return s;
    }
};