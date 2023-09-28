// https://leetcode.com/problems/validate-binary-search-tree

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
    bool isValidBST(TreeNode* root) {      
         return helper(root, LONG_MIN, LONG_MAX);
    }
    
    bool helper (TreeNode* root, long from, long to) {
        if (root == NULL)
            return true;
              
        if (root->val > from && root->val < to)
            return helper(root->left, from, root->val) && helper(root->right, root->val, to);
        
        return false;
    }
};