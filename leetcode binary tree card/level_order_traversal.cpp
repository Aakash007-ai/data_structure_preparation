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
vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> ans;
    queue<TreeNode *> q;
    if (root) q.push(root);
    while (!q.empty()) {
        int len = q.size();
        vector<int> level;
        for (int i = 0;i < len;++i) {
            TreeNode *node = q.front();
            level.push_back(node->val);
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
            q.pop();
        }
        ans.push_back(level);
    }
    return ans;
}
//  vector<vector<int>> levelOrder(TreeNode* root){
//     vector<vector<int>> ans={};
//     if(root==NULL){
//         return ans;
//     }
//     queue<TreeNode *> qu;
//     qu.push(root);
//     int i=0,j=0;
//     TreeNode *hold=qu.front();
//     ans[i][j]=hold->val;
//     qu.pop();
//     if(hold->left!=NULL){
//         qu.push(hold->left);
//     }
//     // else{
//     //     qu.push(NULL);
//     // }
//     //qu.push(root->left);
//     if(hold->right!=NULL){
//         qu.push(hold->right);
//     }
//     // else{
//     //     qu.push(NULL);
//     // }
//     //qu.push(root->right);
//     i++;
//     while(!qu.empty()){
//         for(int j=0;j<2*i;j++){
//             TreeNode * hold=qu.front();
//             if(hold!=NULL)
//                 ans[i][j]=hold->val;
//             qu.pop();
//             if(hold->left!=NULL){
//                 qu.push(hold->left);
//             }
//             // else{
//             //     qu.push(NULL);
//             // }
//             if(hold->right!=NULL){
//                 qu.push(hold->right);
//             }
//             // else{
//             //     qu.push(NULL);
//             // }
//         }
//         i++;
//     }
//     return ans;
// } 
    //qu.push_back(root);
    // while(!qu.empty()){
    
    //     //TreeNode* hold=nodes.p
    // }


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */