#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
//we have to create memory in heap then assign value of node to it
//we create a unordered_map to store nodes which are not visited and to assign children 
//we iterater over neighbour :- if their nodes are already created then connect them else create and connect
class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node==NULL) return NULL;
        unordered_map<int,Node*> mp;
        mp[node->val]=new Node(node->val);
        queue<Node*> q;
        q.push(node);
        while(!q.empty()){
            Node* root=q.front();q.pop();
            for(auto it:root->neighbors){
                if(mp[it->val]){
                    mp[root->val]->neighbors.push_back(mp[it->val]);
                    continue;
                }
                mp[it->val]=new Node(it->val);
                mp[root->val]->neighbors.push_back(mp[it->val]);
                q.push(it);
            }
        }
        return mp[1];
    }
    // Node* cloneGraph(Node* node) {
    //     if(!node) return NULL;//if node is null return null
    //     queue<Node*> q;//create queue
    //     q.push(node);//ready queue for bfs traversal
    //     unordered_map<int,Node*> mp;//used to store and get node value with arddress and get neighbours
    //     Node* dummy=new Node(node->val);//first ever node
    //     mp[node->val]=dummy;//store first node into map
    //     unordered_set<int> st;//used to avoid cycle
    //     st.insert(node->val);//we visited first node
    //     while(!q.empty()){//while q not empty
    //         Node* root=q.front();q.pop();//start traversing neighbour
    //         for(auto it:root->neighbors){
    //             if(st.count(it->val)>0){//if neighbour is already generated we just have to join it
    //                 mp[root->val]->neighbors.push_back(mp[it->val]);//we just connect already generated node's value 
    //                 continue;//not required to push into queue
    //                 //continue to next neighbour
    //             }
    //             Node* dum=new Node(it->val);//creating uncreated node in heap memeory
    //             mp[it->val]=dum;//inserting newly creating node into
    //             q.push(dum);
    //             st.insert(it->val);
    //             mp[root->val]->neighbors.push_back(mp[it->val]);
    //         }
    //     }
    //     return mp[1];
    // }
};