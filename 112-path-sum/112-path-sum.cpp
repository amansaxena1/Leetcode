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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        targetSum -= root->val;
        if(!root->left && !root->right && !targetSum) return true;
        bool ans = false;
        if(root->left) ans = hasPathSum(root->left, targetSum);
        if(!ans && root->right) ans = hasPathSum(root->right, targetSum);
        return ans;
    }
};