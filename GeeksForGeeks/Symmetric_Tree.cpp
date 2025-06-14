/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  private:
    bool isMirror(Node* left, Node* right) {
        if (!left && !right) return true;
        if (!left || !right) return false;
        if (left->data != right->data) return false;
        
        return isMirror(left->left, right->right) &&
               isMirror(left->right, right->left);
    }
    
  public:
    bool isSymmetric(Node* root) {
        // Code here
        if (!root) return true;
        return isMirror(root->left, root->right); 
    }
};
