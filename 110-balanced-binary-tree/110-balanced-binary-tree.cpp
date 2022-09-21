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
    int height(TreeNode* root){
        int l = 0, r = 0;
        if(root->left) l = height(root->left);
        if(l != -1 && root->right) r = height(root->right);
        if(l == -1 || r == -1 || abs(r-l) > 1) return -1;
        return 1 + max(l,r);
        
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        return height(root) != -1;
    }
};