/* 237. Delete Node in a Linked List
 * ## Delete one node in single-linked list
 * node1 -> target -> node3
 * 因为我们只是单链，target的prev拿不到，只能把node3的val给target，
 * 真正删除的是target的next(node3)，把node3包装给target就行
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* next = node->next;
        node->val = next->val;
        node->next = next->next;
        delete next;
    }
};
