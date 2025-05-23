// leetcode - 111

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
private:
    int solve(TreeNode* root, int curr){
        if(!root){
            return INT_MAX;
        }
        curr++;
        if(!root->left && !root->right){
            return curr;
        }
        int leftDepth = solve(root->left, curr);
        int rightDepth = solve(root->right, curr);
        return min(leftDepth, rightDepth);
    }

public:
    int minDepth(TreeNode* root) {
        if(!root){
            return 0;
        }
        return solve(root, 0);
    }
};
