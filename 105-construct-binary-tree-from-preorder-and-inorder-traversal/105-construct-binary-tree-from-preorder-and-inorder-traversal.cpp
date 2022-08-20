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
    TreeNode* helper(int l, int r, int &ind, vector<int>& preorder, vector<int>& inorder, map<int,int>&mp){
        if(l>r) return NULL;
        TreeNode* node = new TreeNode(preorder[ind++]);
        node->left = helper(l, mp[node->val]-1, ind, preorder, inorder, mp);
        node->right = helper(mp[node->val] + 1, r, ind, preorder, inorder, mp);
        return node;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int ind = 0;
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++) mp[inorder[i]] = i;
        return helper(0, inorder.size()-1, ind, preorder, inorder, mp);
    }
};