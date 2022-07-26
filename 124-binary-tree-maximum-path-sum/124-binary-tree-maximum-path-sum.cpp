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
    int helper(TreeNode*root, int &ans){
        
        int l = 0, r = 0;
        if(root -> left) l = helper(root->left, ans);
        if(root -> right) r = helper(root->right, ans);
        
        ans = max(ans, root->val + max(l, max(r, max(l + r, 0))));
        
        return root->val + max(0,max(l, r));
    }
    
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        int t = helper(root, ans);
        return ans;
    }
};