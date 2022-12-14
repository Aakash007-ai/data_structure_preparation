// // This solution makes use of the fact that all square numbers are sum of odd numbers starting from 1.
// // For ex :
// // 1 = 1
// // 1+3 = 4
// // 1 + 3 + 5 = 9
// // 1 + 3 + 5 + 7 = 16
// // .... and so on
// // So i keep subtracting odd numbers from the given number, starting from 1. If the number eventually reaches 0, it is a perfect square. If it reaches a negative number without reaching 0 it is not a perfect square.
// // So the code goes like :

// class Solution {
// public:
//     bool isPerfectSquare(int num) {
//         int i=1;
//         while(num>0){
//             num -= i;      //Subtracting odd number from num and updating num
//             i +=2;         // Updating i to the next odd number
//             if(!num) return true;
//         }
//         return false;
//     }
// }

// class Solution {
// public:
//     bool isPerfectSquare(int num) {
//         int start = 1, end = num;
//         while(start<=end){
//             long long int mid = start + (end-start)/2;
//             if(mid * mid == num){
//                 return true;
//             }
//             else if(mid * mid < num){
//                 start = mid + 1;
//             }
//             else{
//                 end = mid - 1; 
//             }
//         }
//         return false;
//     }
// };

//   // long r = x;
//   //   while (r*r > x)
//   //       r = (r + x/r) / 2;
//   //   return r*r == x;