
class Solution {
public:


    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    // ListNode* middleNode(ListNode* head) {
    //     int i=0;
    //     ListNode* temp = head;
    //     while(temp != NULL){
    //         i++;
    //         temp = temp->next;
    //     }
    //     if(i % 2 == 0){
    //         i = (i/2)+1;
    //         for(int j=0;j<i-1;j++){
    //             head = head->next;
    //         }
    //     }else{
    //         i = (i/2);
    //         ListNode* n = head;
    //         for(int j=0;j<i;j++){
    //             head = head->next;
    //         }
    //     }
    //     return head;
    // }
};