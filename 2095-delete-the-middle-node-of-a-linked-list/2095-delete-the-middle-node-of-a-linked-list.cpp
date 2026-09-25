
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        if(slow->next == NULL){
            head = head->next;
            return head;
        }
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* temp = head;
        while(temp->next != slow ){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};