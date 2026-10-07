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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* prev = NULL;
        ListNode* temp = head;
        ListNode* after = NULL;
        ListNode* dummy = new ListNode(-1);
        ListNode* t = dummy;
        int k = 1;
        while(temp != NULL){
            if((k + 1) == left){
                prev = temp;
            }
            if(k == right){
                after = temp->next;
            }
            if(k >= left && k <= right){
                t->next = temp;
                t= t->next;
            }
            temp = temp->next;
            k++;
        }
        t->next = NULL;
        dummy = reverse(dummy->next);
        k = 1;
        t = dummy;
        while(t->next != NULL){
            t = t->next;
        }
        t->next = after;
        ListNode* x = prev;
        if(prev == NULL) return dummy;
        prev->next = dummy;
        return head;
    }
};