// leetcode - 100

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
    void bfs(TreeNode* t, queue<int> &q){
        if(t){
            q.push(t->val);
            bfs(t->left, q);
            bfs(t->right, q);
        }
        else{
            q.push(INT_MIN);
            return;
        }
    }

public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<int> pQ;
        queue<int> qQ;
        bfs(p, pQ);
        bfs(q, qQ);
        if(pQ == qQ){
            return true;
        }
        else{
            return false;
        }
    }
};
