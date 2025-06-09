/*The Node structure is
class Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};*/

class Solution {
  private:
  bool isDeadEndUtil(Node* root, int minVal, int maxVal){
      if(!root){
          return false;
      }
      if(!root->left && !root->right){
          if (minVal == maxVal){
              return true;
          }
      }
      return isDeadEndUtil(root->left, minVal, root->data - 1) || isDeadEndUtil(root->right, root->data + 1, maxVal);
  }
  
  public:
    bool isDeadEnd(Node *root) {
        // Code here
        return isDeadEndUtil(root, 1, INT_MAX);
    }
};
