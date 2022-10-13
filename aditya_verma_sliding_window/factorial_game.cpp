#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    static int i = 2;
 
    // corner cases
    if (n == 0 || n == 1) {
        return false;
    }
 
    // Checking Prime
    if (n == i)
        return true;
 
    // base cases
    if (n % i == 0) {
        return false;
    }
    i++;
    return isPrime(n);
}


int solve(int A, int B) {
    vector<int> a(A+1);
    a[0]=1;
    for(int i=1;i<=A;i++){
        a[i]=a[i-1]*i;
    }
    for(int i=1;i<=A;i++){
        a[i]=a[i]+B;
    }
    int ans=0;
    for(int i=1;i<=A;i++){
        ans=ans+ isPrime(a[i])==true?1:0;
    }
    return ans;
}

















// int isPrime(int n){
//      if (n==0) return 0;
//         else if (n==1) return 0;
//         else if (n==2) return 2;
//         else if (n==3) return 3;

//          int[] a = new int[n+1];
//         a[0]=0;
//         a[1]=0;
//         List<Integer> prime = new ArrayList<Integer>(); 
//         for (int i=2; i<=n; i++) {
//             if (isPrime(i)) prime.add(i);
//         }
        
//         for (int i=3; i<=n; i++) {
//             if (!prime.contains(i)) {
//                 int j=prime.size()-1; 
//                 while (j>=0 && i%prime.get(j)!=0) 
//                     j--; 
//                 a[i]=a[i/prime.get(j)]+prime.get(j);
//             }
//             else {
//                 a[i]=i;
//             }
//         }
//         return a[n];
// }



// public int minSteps(int n) {
//         if (n==0) return 0;
//         else if (n==1) return 0;
//         else if (n==2) return 2;
//         else if (n==3) return 3; 
        
//         int[] a = new int[n+1];
//         a[0]=0;
//         a[1]=0;
//         List<Integer> prime = new ArrayList<Integer>(); 
//         for (int i=2; i<=n; i++) {
//             if (isPrime(i)) prime.add(i);
//         }
        
//         for (int i=3; i<=n; i++) {
//             if (!prime.contains(i)) {
//                 int j=prime.size()-1; 
//                 while (j>=0 && i%prime.get(j)!=0) 
//                     j--; 
//                 a[i]=a[i/prime.get(j)]+prime.get(j);
//             }
//             else {
//                 a[i]=i;
//             }
//         }
//         return a[n];
//     }
    
//     public boolean isPrime(int n) {
//         for (int i=2; i<=n/2; i++) {
//             if (n%i==0) return false;
//         }
//         return true; 
//     }