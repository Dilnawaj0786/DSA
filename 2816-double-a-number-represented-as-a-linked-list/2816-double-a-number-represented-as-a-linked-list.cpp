/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr != NULL){
            ListNode* fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        ListNode* x = reverse(head);
        ListNode* t = x;
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        int carry = 0;
        while(t != NULL){
            int data = t->val * 2 + carry;
            if(data > 9){
                data -= 10;
                carry = 1;
            }else{
                carry = 0;
            }
            t->val = data;
            temp->next = t;
            t = t->next;
            temp = temp->next;
        }

        if(carry == 1){
            ListNode* y = new ListNode(1);
            temp->next = y;
        }

        return reverse(dummy->next);

    }
};