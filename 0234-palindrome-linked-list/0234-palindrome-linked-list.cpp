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
    bool isPalindrome(ListNode* head) {
        if(head->next == NULL) return true;


        // deep copy ke liye
        ListNode* copy = new ListNode(head->val); 
        ListNode* temp = head;
        ListNode* temp1 = copy;
        while(temp->next != NULL){
            temp = temp->next;
            temp1->next = new ListNode(temp->val);
            temp1 = temp1->next;
        }

        // reversing list
        ListNode* prev = NULL;
        ListNode* current = head;
        while( current != NULL){
            ListNode* fwd = current->next;
            current->next = prev;
            prev = current;
            current = fwd;
        }


        // comparing for palindrom
        ListNode* v = copy;
        ListNode* temp2 = prev;
        while( v != NULL && temp2 != NULL){
            if(v->val != temp2->val) return false;
            v= v->next;
            temp2 = temp2->next;
        }

        return true;
    }
};