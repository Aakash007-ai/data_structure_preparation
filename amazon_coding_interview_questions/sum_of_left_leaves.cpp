#include<bits/stdc++.h>//try again
using namespace std;//good tree question
//try iterative approach
//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
    private: int sum=0;
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        int sum=0;
        if(root->left){
            if(isLeaf(root->left)) sum+=root->left->val;
            else sum+= sumOfLeftLeaves(root->left);
        }
        sum+=sumOfLeftLeaves(root->right);
        return sum;
    }
    bool isLeaf(TreeNode* node){
        return node->left==NULL && node->right==NULL;
    }
};