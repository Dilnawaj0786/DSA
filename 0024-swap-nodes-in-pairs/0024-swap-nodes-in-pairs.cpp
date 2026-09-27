
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* a = head;
        ListNode* ans = head->next;
        ListNode* prev = NULL;
        while(a != NULL){
            ListNode* b = a->next;
            if(b == NULL){
                prev->next = a;
                break;
            }
            ListNode* fwd = b->next;
            b->next = a;
            if(prev != NULL) prev->next = b;
            else head = b;
            prev = a; 
            a->next = NULL;
            a = fwd;
        }
        return ans;
    }
};