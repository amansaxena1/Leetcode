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
    
    void helper(TreeNode* root, long long int targetSum, long long int &ans){
        targetSum -= root->val;
        if(targetSum == 0) ans++;
        if(root->left) helper(root->left, targetSum ,ans);
        if(root->right) helper(root->right, targetSum ,ans);
    }
    
    void forAll(TreeNode* root, long long int targetSum, long long int &ans){
        if(root->left) {
            helper(root->left, targetSum, ans);
            forAll(root->left, targetSum, ans);
        }
        if(root->right) {
            helper(root->right, targetSum, ans);
            forAll(root->right, targetSum, ans);
        }
    }

    int pathSum(TreeNode* root, int targetSum) {
        long long int ans = 0;
        if(!root) return 0;
        helper(root, targetSum, ans);
        forAll(root, targetSum, ans);
        return ans;
    }
};