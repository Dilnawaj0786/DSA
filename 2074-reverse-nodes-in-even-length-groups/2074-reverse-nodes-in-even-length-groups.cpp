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
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        int step = 1;
        ListNode* dummy = new ListNode(-1);
        ListNode* d = dummy;
        ListNode* temp = head;
        while(temp != NULL){
            int x = step;
            if(x % 2 == 0){
                // reverse
                int length = 0;
                ListNode* dummy1 = new ListNode(-1);
                ListNode* d1 = dummy1;
                while(x > 0 && temp != NULL){
                    ListNode* n = new ListNode(temp->val);
                    d1->next = n;
                    temp = temp->next;
                    d1 = d1->next;
                    x--;
                    length++;
                }
                if(length % 2 == 0){
                    ListNode* rev = reverse(dummy1->next);
                    d->next = rev;
                    while(d->next != NULL) d = d->next;
                }else{
                    d->next = dummy1->next;
                    while(d->next != NULL) d = d->next;
                }
            }else{
                int length = 0;
                ListNode* dummy2 = new ListNode(-1);
                ListNode* d2 = dummy2;
                while(x > 0 && temp != NULL){
                    ListNode* n = new ListNode(temp->val);
                    d2->next = n;
                    temp = temp->next;
                    d2 = d2->next;
                    x--;
                    length++;
                }
                if(length % 2 == 0){
                    ListNode* rs = reverse(dummy2->next);
                    d->next = rs;
                    while(d->next != NULL) d = d->next;
                }else{
                    d->next = dummy2->next;
                    while(d->next != NULL) d = d->next;
                }
            }
            step++;
        }
        return dummy->next;

    }
};