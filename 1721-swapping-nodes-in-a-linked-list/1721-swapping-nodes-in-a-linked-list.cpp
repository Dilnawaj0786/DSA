
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* slow = head;
        ListNode* fast = head;
        for(int i=1;i<=k;i++){
            fast = fast->next;
        }
        for(int i=1;i<k;i++){
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