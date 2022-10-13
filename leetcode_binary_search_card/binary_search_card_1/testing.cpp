#include<bits/stdc++.h>
using namespace std;
// 5 5
// 1 1 0 0 0
// 1 1 1 1 0
// 1 0 0 0 0
// 1 1 0 0 0
// 1 1 1 1 1
// 3
// Driver code
int main()
{
 // Input vector
 std::vector<int> v{2,1,1,0,0};//{ 10, 20, 30, 30, 30, 40, 50 };

 // Print vector
 std::cout << "Vector contains :";
 for (unsigned int i = 0; i < v.size(); i++)
  std::cout << " " << v[i];
 std::cout << "\n";
 //std::vector<int>::iterator low1, low2, low3;
 // std :: lower_bound
//  low1 = std::lower_bound(v.begin(), v.end(), 0);
//  low2 = std::lower_bound(v.begin(), v.end(), 1);
//  low3 = std::lower_bound(v.begin(), v.end(), 2);
 auto low1 = std::upper_bound(v.rbegin(), v.rend(), 0);
 auto low2 = std::upper_bound(v.rbegin(), v.rend(), 1);
 auto low3 = std::upper_bound(v.rbegin(), v.rend(), 2);

 // Printing the lower bounds
 std::cout<< "\nlower_bound for element 30 at position : "<< (low1 - v.rbegin());
 std::cout<< "\nlower_bound for element 35 at position : "<< (low2 - v.rbegin());
 std::cout<< "\nlower_bound for element 55 at position : "<< (low3 - v.rbegin());
 return 0;
}

// int main(){
// 	// int n;
// 	// cin>>n;
// 	// vector<int> arr(n);
// 	// for(int i=0;i<n;i++){
// 	// 	int x;
// 	// 	cin>>x;
// 	// 	arr.push_back(x);
// 	// }
// 	// int target;
// 	// cin>>target;
// 	// int ind=lower_bound(arr.begin(),arr.end(),target)-arr.begin();
// 	// int ind=upper_bound(arr.begin(),arr.end(),target)-arr.begin();
//     // cout<<ind;
// 	// vector<int> nums{0,0,1,1,2};
// 	// auto ind=lower_bound(nums.begin(),nums.end(),0);//-nums.begin();
// 	// int in=ind-nums.begin();
// 	// cout<<in;

// 	int n,m;
// 	cin>>n>>m;
// 	vector<vector<int>> nums(n);//(n,vector<int> (m,0));
// 	//cout<<"take input\n";
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			int x;
// 			cin>>x;
// 			nums[i].push_back(x);
// 			//nums[i][j]=x;
// 		}
// 	}
// 	//cout<<"take k\n";
// 	int k;
// 	cin>>k;
// 	vector<int> count;
// 	for(int i=0;i<nums.size();i++){
// 		int ind=upper_bound(nums[i].rbegin(),nums[i].rend(),0)-nums[i].rbegin();
// 		if(ind== 0) count.push_back(m-1); //if all are 1 then it point to first index i.e 0
// 		else if(ind==m) count.push_back(0); //if all are 0 then it point to end of index i.e m
// 		else{//if there are some 0 and some 1
// 			count.push_back(m-ind);
// 		}
// 	}
// 	priority_queue<pair<int,int>> pq;
// 	for(int i=1;i<nums.size();i++){
// 		if(count[i-1]<=count[i]){
// 			pq.push({count[i-1],i-1});
// 		}
// 	}
// 	vector<int> ans;
// 	while(k--){
// 		ans.push_back(pq.top().second);
// 		cout<<pq.top().second<<"\t";
// 		pq.pop();
// 	}
// }