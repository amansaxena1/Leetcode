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
    void preorder(TreeNode* root, llint &last, llint &ans){
        if(root){
            preorder(root->left, last, ans);
            ans = min(ans, abs(last-(root->val)));
            last = root->val;
            preorder(root->right, last, ans);
        }
    }
    int getMinimumDifference(TreeNode* root) {
        llint ans = INT_MAX;
        llint last = -1000000;
        preorder(root, last, ans);
        return ans;
    }
    int minDiffInBST(TreeNode* root) {
        return getMinimumDifference(root);
    }
};