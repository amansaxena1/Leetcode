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
    
    void helper(TreeNode* root, map<string, vector<TreeNode*>> &mp, string &str){
        string sa=">>",sb="<<";
        if(root->left) helper(root->left, mp, sa);
        if(root->right) helper(root->right, mp, sb);
        // cout<<sa + to_string(root->val) + "-" + sb<<"\n";
        str = sa + to_string(root->val) + "-" + sb;
        mp[str].push_back(root);
    }
    
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        map<string, vector<TreeNode*>>mp;
        vector<TreeNode*>temp;
        string str = "";
        helper(root, mp , str);
        // for(auto i:mp) {
        //     cout<<i.first<<"===";
        //     // for(auto j:i.second) cout<< j->val<<"-";
        //     cout<<i.second.size()<<"\n";
        // }
        vector<TreeNode*> ans;
        for(auto i:mp) if(i.second.size() > 1) ans.push_back(i.second[0]);
        return ans;
    }
};