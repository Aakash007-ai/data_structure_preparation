#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right; 
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
int maxDepth(TreeNode* root) {
   if(root==NULL){
       return 0;
   }
   return max(maxDepth(root->left),maxDepth(root->right))+1;
}
// static int ans=0;
// void topDown(TreeNode *root,int depth){
//     if(root==NULL){
//         ans=max(ans,depth);
//     }
//     topDown(root->left,depth+1);
//     topDown(root->right,depth+1);
// }
// int maxDepth(TreeNode* root) { 
//     topDown(root,0);
//     return ans;
// }