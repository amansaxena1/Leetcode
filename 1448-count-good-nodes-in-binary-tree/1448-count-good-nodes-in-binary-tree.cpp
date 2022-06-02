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
#define llint int
class Solution {
public:
    
    void helper(TreeNode* root, llint maxi, llint &ans){
        if(root->val >= maxi) ans++;
        
        maxi = max(maxi, root->val);
        if(root->left) helper(root->left, maxi, ans);
        if(root->right) helper(root->right, maxi, ans);
    }

    int goodNodes(TreeNode* root) {
        llint ans = 0, maxi=INT_MIN;
        helper(root, maxi, ans);
        return ans;
    }
};