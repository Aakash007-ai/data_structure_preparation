// Input: numbers = [2,7,11,15], target = 9
// Output: [1,2]
// Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2
// 			We return [1, 2]

// Input: numbers = [2,3,4], target = 6
// Output: [1,3]
// Explanation: The sum of 2 and 4 is 6. Therefore index1 = 1, index2 = 3
// 			We return [1, 3]

//2 pointer o(n)
// sum of first and last pointer then decrease according to sum
// if(first+last > target) then last--;
// if(first+last < target) then first++;
// if(first + last == target) return {first,last}

// hashing nlogn
// for(int i=0;i<n;i++){  // ma[ of nums with index]
//   mp.find(target-nums[i]) 	
//  }

//binary search nlogn 
// for(int i=0;i<n;i++){
//    binary search on left unused part
//}