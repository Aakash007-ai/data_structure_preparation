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
class Solution {
public:
    vector<int> ans={};
    vector<int> preorderTraversal(TreeNode* root) {
    if(root==NULL)
        return ans;
        
    if(root->val!=NULL)
        ans.push_back(root->val);
        
    preorderTraversal(root->left);
    preorderTraversal(root->right);
        return ans;
    }

    vector<int> inorderTraversal(TreeNode* root) {
    if(root==NULL)
        return ans;
        
    inorderTraversal(root->left);
    if(root->val!=NULL)
        ans.push_back(root->val);
    preorderTraversal(root->right);
        return ans;
    }
};

// preorder  first root then left node then right node
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