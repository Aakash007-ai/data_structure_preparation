#include<bits/stdc++.h>
using namespace std;
//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    TreeNode* lca;
    bool solve(TreeNode* root ,TreeNode* p,TreeNode* q){
        if(root==NULL) return false;
        bool mid=false;
        if(root==p || root==q) mid=true;
        bool left=solve(root->left,p,q);
        bool right=solve(root->right,p,q);
        if((mid && left) || (mid && right) || (left && right)) lca==root;
        // else if(left==true && right==true) lca=root;
        else if(left || right ) return true;
        return false;`
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        solve(root,p,q);
        return lca;
    }
};