
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* x1 = l1;
        ListNode* x2 = l2;
        ListNode* dummy = new ListNode(-1);
        ListNode* ans = dummy;
        int carry = 0;
        bool flag = false;
        while(x1 !=  NULL &&  x2  != NULL){
            int sum = (x1->val + x2-> val + carry);
            if(sum >= 10){
                flag = true;
                carry = 1;
                sum = sum-10;
            }else{
                flag = false;
                carry = 0;
            }
            ListNode* y = new ListNode(sum);
            ans->next = y;
            ans = ans->next;
            x1 = x1->next;
            x2 = x2->next;
        }

        while(x1  != NULL){
            int sum = x1->val  + carry;
            if(sum >= 10){
                flag = true;
                carry = 1;
                sum = sum-10;
            }else{
                flag = false;
                carry = 0;
            }
            ListNode* y = new ListNode(sum);
            ans->next = y;
            ans = ans->next;
            x1 = x1->next;
        }

        while(x2  != NULL){
            int sum = x2->val + carry;
            if(sum >= 10){
                flag = true;
                carry = 1;
                sum = sum-10;
            }else{
                flag = false;
                carry = 0;
            }
           ListNode* y = new ListNode(sum);
            ans->next = y;
            ans = ans->next;
            x2 = x2->next;
        }
        if(carry == 1){
            ListNode* y = new ListNode(carry);
            ans->next = y;
            ans = ans->next;
        }
        ans->next = NULL;
        return dummy->next;

    }
};