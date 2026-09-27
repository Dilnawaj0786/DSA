
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* current = head;
        while(current != NULL){
            ListNode* fwd = current->next;
            current->next = prev;
            prev = current;
            current = fwd;
        }
        return prev;
    }
};