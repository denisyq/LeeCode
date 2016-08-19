/* 206. Reverse Linked List
 * Tip: reverse one by one time
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head; // NULL or 1 element

        ListNode* prev = NULL;
        ListNode* cur = head;
        ListNode* next = head->next;
        ListNode* tmp;
        while(next != NULL){
            cur->next = prev;

            tmp = cur;
            cur = next;
            next = next->next;
            prev= tmp;
        }
        cur->next = prev;
        return cur;
    }
};
