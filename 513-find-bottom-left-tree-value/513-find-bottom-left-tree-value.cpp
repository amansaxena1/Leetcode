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
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode *>q;
        vector<vector<TreeNode*>> v;
        q.push(root);
        while(q.size()){
            int s = q.size();
            vector<TreeNode*>temp;
            for(int i=0; i<s; i++){
                TreeNode* t = q.front();
                q.pop();
                temp.push_back(t);
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            v.push_back(temp);
        }
        return v[v.size()-1][0]->val;
    }
};