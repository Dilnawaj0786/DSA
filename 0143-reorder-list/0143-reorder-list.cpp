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
    ListNode* reverse(ListNode* head) {
        // not taking extra space
        ListNode* prev = NULL;
        ListNode* current = head;
        while(current != NULL){
            ListNode* fwd = current->next;
            current->next = prev;
            prev = current;
            current = fwd;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* a = head;
        ListNode* b = slow->next;
        slow->next = NULL;
        b = reverse(b);
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        ListNode* temp1 = a;
        ListNode* temp2 = b;
        while(temp1){ // t1 not equal to NULL
            temp->next = temp1;
            temp = temp->next;
            temp1 = temp1->next;

            temp->next = temp2;
            temp = temp->next;
            if(temp2) temp2 = temp2->next;
        }
        head = dummy->next;
    }
};