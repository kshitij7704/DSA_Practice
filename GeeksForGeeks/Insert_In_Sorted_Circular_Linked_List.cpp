/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        // code here
        Node* newNode = new Node(data);
        
        // Case 1: Empty list
        if(head == NULL){
            newNode->next = newNode;
            return newNode;
        }

        Node* curr = head;
        while (true) {
            // Case 2: Normal position between two sorted nodes
            if(curr->data <= data && data <= curr->next->data){
                break;
            }

            // Case 3: Wrap-around point (max node to min node)
            if(curr->data > curr->next->data){
                if(data >= curr->data || data <= curr->next->data){
                    break;
                }
            }

            curr = curr->next;

            // Case 4: All nodes are the same or we've looped back to head
            if(curr == head){
                break;
            }
        }

        // Insert the new node
        newNode->next = curr->next;
        curr->next = newNode;

        // Update head if new node is the smallest
        if(data < head->data){
            return newNode;
        }

        return head;
    }
};
