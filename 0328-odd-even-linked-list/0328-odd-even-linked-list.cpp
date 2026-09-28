
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* dummy1 = new ListNode(-1);
        ListNode* d1 = dummy1;
        ListNode* dummy2 = new ListNode(-1);
        ListNode* d2 = dummy2;
        ListNode* temp = head;
        int x  = 1;
        while(temp != NULL){
            if(x % 2 == 1){
                d1->next = temp;
                d1 = d1->next;
            }else{
                d2->next = temp;
                d2 = d2->next;
            }
            temp = temp->next;
            x++;
        }
        d2->next = NULL;
        d1->next = dummy2->next;
        return dummy1->next;

    }
};