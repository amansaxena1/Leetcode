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
    TreeNode* findNode(TreeNode* root, int x){
        if(root->val == x) return root;
        TreeNode* ans = NULL;
        if(root->left) ans = findNode(root->left, x);
        if(!ans && root->right) ans = findNode(root->right, x);
        return ans;
    }
    int countNodes(TreeNode* root, int x){
        int cnt = 1;
        if((!root) || root->val == x) return 0;
        if(root->left) cnt += (countNodes(root->left, x));
        if(root->right) cnt += (countNodes(root->right, x));
        return cnt;
    }
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
        int l = 0, r = 0, p = 0;
        TreeNode* node = findNode(root, x);
        l = countNodes(node->left, x);
        r = countNodes(node->right, x);
        p = countNodes(root, x);        
        if(l > (p + r) || p > (l + r) || r > (p + l)) return true;
        return false;
    }
};

//      1
//   2      3
// 4   5


