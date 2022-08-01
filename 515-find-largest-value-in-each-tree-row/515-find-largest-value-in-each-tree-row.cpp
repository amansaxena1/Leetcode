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
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*>q;
        
        q.push(root);
        vector<int>temp;
        vector<int>ans;
        if(!root) return ans;
        while(q.size()){
            int s = q.size();
            temp.clear();
            for(int i=0;i<s;i++){
                TreeNode* ele = q.front();
                q.pop();
                temp.push_back(ele->val);
                if(ele->left) q.push(ele->left);
                if(ele->right) q.push(ele->right);
            }
            ans.push_back(*max_element(temp.begin(),temp.end()));
        }
        return ans;
    }
};