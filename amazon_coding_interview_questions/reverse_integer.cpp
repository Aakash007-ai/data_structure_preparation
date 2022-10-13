#include<bits/stdc++.h>
using namespace std;
//using libraries
// int reverse(int x) {
//     int sign=1;
//     if(x<0){
//         sign*=-1;
//         x*=-1;
//     }
//     string s=to_string(x);
//     std::reverse(s.begin(),s.end());
//     x=stoi(s);
//     return x*sign;
// } give runtime error on stoi of 1534236469 as out of range
class Solution {
public:
    int reverse(int x) {
        int sign=1;
        if(x<0){
            sign*=-1;
            x*=-1;
        }
        int ans=0;
        while(x){
            ans=ans*10+x%10;
            x/=10;
            if(ans> INT32_MAX) return 0;
        }
        return ans*sign;
    }
};

void int_to_string(){{
 int num = 2016;
 // declaring output string stream
 ostringstream str1;
 // Sending a number as a stream into output
 // string
 str1 << num;
 // the str() converts number into string
 string geek = str1.str();
 // Displaying the string
 cout << "The newly formed string from number is : ";
 cout << geek << endl;
}