/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;
    Node() {}
    Node(int _val) {
        val = _val;
    }
    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*> q;
        q.push(root);
        vector<vector<int>> ans;
        while(!q.empty()){
            vector<int> temp;
            int sz=q.size();
            for(int i=0;i<sz;i++){
                Node* n=q.front();q.pop();
                temp.push_back(n->val);
                for(auto it:n->children){
                    q.push_back(it);
                }
            }
            ans.emplace_back(temp);
        }
        return ans;
    }
};