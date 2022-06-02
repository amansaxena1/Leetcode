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
#define llint long long int
class Solution {
public:
    void inorder(TreeNode* root, int k, bool &ans, vector<llint>&v){
        if(root && !ans){
            inorder(root->left, k, ans, v);
            v.push_back(root->val);
            inorder(root->right, k, ans, v);
        }
    }
    
    bool findTarget(TreeNode* root, int k) {
        bool ans = false;
        vector<llint>v;
        inorder(root, k, ans, v);
        llint l = 0, r = v.size()-1;
        while(l<r){
            if(v[l]+v[r] == k) return true;
            else if(v[l]+v[r] < k) l++;
            else r--;
        }
        return false;
    }
};