/* 203. Remove Linked List Elements
 * remove all val in the linked list
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL) return head;
        
        //val is among the list
        ListNode* node = head;
        while(node->next != NULL){
            if(node->next->val == val){
                node->next = node->next->next;
                continue;
            }
            node = node->next;
        }
        if(head->val == val){
            head = head->next;
        }
        return head;
    }
};
