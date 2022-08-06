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
    
    void helper(int &ind, TreeNode* node, int par, vector<int>&v){
        
        // if(ind<v.size())
        // cout<<v[ind]<<" "<<node->val<<" "<<par<<"\n";
        if(ind < v.size() && v[ind] > par) return;
        if(ind < v.size() && v[ind] < node->val) {
            node->left = new TreeNode(v[ind]);
            ind++;
            helper(ind, node->left, node->val, v);
        }
        if(ind < v.size() && v[ind] > par) return;
        if(ind < v.size() && v[ind] > node->val){
            node->right = new TreeNode(v[ind]);
            ind++;
            helper(ind, node->right, par, v);
        }   
    }
    
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* ans = new TreeNode(preorder[0]);
        int ind = 1;
        helper(ind, ans, INT_MAX, preorder);
        return ans;
    }
};