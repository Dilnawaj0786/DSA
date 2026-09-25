
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* slow = head;
        ListNode* fast = head->next;
        for(int i=1;i<k;i++){
            fast = fast->next;
            temp = temp->next;
        }
        while(fast != NULL){
            slow = slow->next;
            fast = fast->next;
        }
        swap(temp->val,slow->val);
        return head;
    }
};