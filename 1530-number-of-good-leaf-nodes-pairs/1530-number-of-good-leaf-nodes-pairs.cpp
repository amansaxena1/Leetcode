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
    /*Following is the TreeNode class structure

template <typename T>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

*/
#include<bits/stdc++.h>
void makePar(TreeNode* root, unordered_map<TreeNode*,TreeNode*>&mp, queue<pair<TreeNode*, TreeNode*>>&q){
    if(root->left){
        mp[root->left] = root;
        makePar(root->left, mp, q);
    }
    if(root->right){
        mp[root->right] = root;
        makePar(root->right, mp, q);
    }
    if(!root->left && !root->right) q.push({root, NULL});
}
int countPairs(TreeNode *root, int distance){
    unordered_map<TreeNode *,TreeNode*>mp;
    queue<pair<TreeNode *, TreeNode *>>q;
    makePar(root, mp, q);
    mp[root] = NULL;
    int ans = 0;
    
    while(q.size() && distance>=0){
        distance--;
        int s = q.size();
        for(int i=0;i<s;i++){
            pair<TreeNode*, TreeNode*> ele = q.front();
            q.pop();
            
            if(mp[ele.first] && mp[ele.first] != ele.second) q.push({mp[ele.first], ele.first});
            if(ele.first->left && ele.first->left != ele.second) q.push({ele.first->left, ele.first});
            if(ele.first->right && ele.first->right != ele.second) q.push({ele.first->right, ele.first});
            if(!ele.first->left && !ele.first->right && ele.second) ans++;
        }
    }
    return (ans/2);
}

    
    
//     int countPairs(TreeNode* root, int distance) {
        
//     }
};