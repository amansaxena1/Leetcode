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
        vector<vector<int>>ans;
        vector<int>temp;
        queue<Node* >q;
        if(!root) return ans;
        q.push(root);
        while(q.size()){
            int s = q.size();
            temp.clear();
            for(int i=0;i<s;i++){
                Node* n = q.front();
                q.pop();
                temp.push_back(n->val);
                for(int j=0;j<n->children.size();j++) q.push(n->children[j]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};