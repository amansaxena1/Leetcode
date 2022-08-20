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
    
    TreeNode* helper(int l, int r, int &ind, vector<int>& inorder, vector<int>& postorder, map<int,int>&mp){
        
        if(l>r) return NULL;
        TreeNode* node = new TreeNode(postorder[ind--]);
        node->right = helper(mp[node->val]+1, r, ind, inorder, postorder, mp);
        node->left = helper(l, mp[node->val]-1, ind, inorder, postorder, mp);
        return node;
        
    }
    
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int ind = postorder.size()-1;
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++) mp[inorder[i]] = i;
        return helper(0, inorder.size()-1, ind, inorder, postorder, mp);
    }
};