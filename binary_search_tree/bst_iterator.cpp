#include<bits/stdc++.h>
using namespace std;
//  Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class BSTIterator {
    private:
        stack<TreeNode*> st;
public:
    BSTIterator(TreeNode* root) {
        pushLeft(root);
    }
    void pushLeft(TreeNode* root){
        while(root){
            st.push(root);
            root=root->left;
        }
    }
    
    int next() {
        TreeNode * curr = st.top();
        st.pop();
        if(curr->right){
            pushLeft(curr->right);
        }
        return curr->val;
    }
    
    bool hasNext() {
        if(st.empty()){
            return false;
        }
        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */