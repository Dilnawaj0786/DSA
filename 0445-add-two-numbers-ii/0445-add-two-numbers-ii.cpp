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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        l1 = reverse(l1);
        l2 = reverse(l2);
        int carry = 0;
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        while(t1 != NULL && t2 != NULL){
            int x = t1->val + t2->val + carry;
            if(x > 9){
                carry = 1;
                int y = x-10;
                ListNode* z = new ListNode(y);
                temp->next = z;
                temp = temp->next;
                t1 = t1->next;
                t2 = t2->next;
            }else{
                carry = 0;
                ListNode* z = new ListNode(x);
                temp->next = z;
                temp = temp->next;
                t1 = t1->next;
                t2 = t2->next;
            }
        }

        while(t1 != NULL){
            int x = t1->val + carry;
            if(x > 9){
                carry = 1;
                int y = x-10;
                ListNode* z = new ListNode(y);
                temp->next = z;
                temp = temp->next;
                t1 = t1->next;
            }else{
                carry = 0;
                ListNode* z = new ListNode(x);
                temp->next = z;
                temp = temp->next;
                t1 = t1->next;
            }
        }

        while(t2 != NULL){
            int x = t2->val + carry;
            if(x > 9){
                carry = 1;
                int y = x-10;
                ListNode* z = new ListNode(y);
                temp->next = z;
                temp = temp->next;
                t2 = t2->next;
            }else{
                carry = 0;
                ListNode* z = new ListNode(x);
                temp->next = z;
                temp = temp->next;
                t2 = t2->next;
            }
        }

        if(carry == 1){
            ListNode* z = new ListNode(1);
            temp->next = z;
            temp = temp->next;
        }
        dummy = reverse(dummy->next);
        return dummy;
    }
};