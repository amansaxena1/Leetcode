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
#define map unordered_map
class Solution {
public:
    
    bool ispseudo(vector<int>&mp){
        int cnt = 0;
        for(auto i:mp) if(i%2) cnt++;
        return cnt < 2;
    }
    
    int path(TreeNode* root, vector<int>arr){
        int v = 0;
        if(!root->left && !root->right){
            arr[root->val]++;
            if(ispseudo(arr)) return 1;
            return 0;
        }
        arr[root->val]++;
        if(root->left) v = path(root->left, arr);
        if(root->right) v += path(root->right, arr);
        return v;
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        int ans= 0;
        vector<int> a(10,0);
        return path(root, a);;
    }
};