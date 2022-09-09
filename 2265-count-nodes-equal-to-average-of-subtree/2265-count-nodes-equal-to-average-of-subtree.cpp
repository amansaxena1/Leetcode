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
    pair<int, int> helper(int &ans, TreeNode* root){
        pair<int, int>p, q;
        // int suma = sum, na = n;
        if(root->left) p = helper(ans, root->left);
        if(root->right) q = helper(ans, root->right);
        int sum = (root->val + p.first + q.first);
        int n = (1 + p.second + q.second);
        if(root->val == sum/n) ans++;
        return {sum, n};
    }
    int averageOfSubtree(TreeNode* root) {
        int ans = 0;
        helper(ans, root);
        return ans;
    }
};