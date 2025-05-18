// leetcode - 23

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        //Min heap creation
        priority_queue<int, vector<int>, greater<int>> pq;

        //Traversing through each linked list
        for(int i=0;i<lists.size();i++){
            //Traversing through each node with each linked list
            while(lists[i]!= NULL){
                //Adding the value of each node to  the min heap and moving to the next node
                pq.push(lists[i]->val);
                lists[i] = lists[i]->next;
            }
        }

        //Declaring ponter for the resultant sorted linked list
        ListNode* ptr = new ListNode(0);
        ListNode* head = ptr;

        while(!pq.empty()){
            //Poping the values from the min heap and adding it to thwresulant linked list
            ptr->next = new ListNode(pq.top());
            pq.pop();
            ptr = ptr ->next;
        }

        //Returing next of head
        return head->next;
    }
};
