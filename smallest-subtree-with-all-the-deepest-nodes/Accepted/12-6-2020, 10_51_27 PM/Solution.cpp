// https://leetcode.com/problems/smallest-subtree-with-all-the-deepest-nodes

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
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
           if (height(root->left) == height(root->right))
            return root;

        if (height(root->left) > height(root->right))
            root = root->left;
        else
            root = root->right;
        
        return subtreeWithAllDeepest(root);     
    }
    
    int height(TreeNode* root) {
        if (root == NULL)
            return 0;
        
        return 1 + max(height(root->left), height(root->right));
    }
    
};