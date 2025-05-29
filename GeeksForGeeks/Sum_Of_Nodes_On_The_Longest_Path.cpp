/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  private:
    pair<int, int> solve(Node* root){
        if(root == NULL){
            return {0, 0};
        }
        auto left = solve(root->left);
        auto right = solve(root->right);
        pair<int, int> best;
        if(left.first > right.first){
            best = left;
        }
        else if(left.first < right.first){
            best = right;
        }
        else{
            if(left.second > right.second){
                best = left;
            }
            else{
                best = right;
            }
        }
        return {best.first + 1, best.second + root->data};
    }
    
  public:
    int sumOfLongRootToLeafPath(Node *root) {
        // code here
        auto res = solve(root);
        return res.second;
    }
};
