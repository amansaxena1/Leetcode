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
    bool dfs(TreeNode* root,int target,string& path)
    {
        if(!root) return false;
        if(root->val==target)
            return true;
        
        bool left=dfs(root->left,target,path+='L');
        if(left) return true;
        path.pop_back();
        bool right=dfs(root->right,target,path+='R');
        if(right) return true;
        path.pop_back();
        
        return false;
    }
    
   TreeNode* lca(TreeNode* root,int start,int end)
   {
       if(!root)
           return NULL;
       
       if(root->val==start || root->val==end)
           return root;
       
       auto left=lca(root->left,start,end);
       auto right=lca(root->right,start,end);
       
       if(left && right) return root;
       if(!left) return right;
       if(!right) return left;
       return NULL;
   }
    string getDirections(TreeNode* root, int startValue, int destValue) {

        auto lcaNode=lca(root,startValue,destValue);
        
        string startNodePath="",endNodePath="";
        dfs(lcaNode,startValue,startNodePath);
        dfs(lcaNode,destValue,endNodePath);
        
        for(auto &it:startNodePath)
        {
            it='U';
        }
            
        return startNodePath+endNodePath;
        
        
    }
};