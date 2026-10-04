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

    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return true;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* a = head;
        ListNode* b = slow->next;
        slow->next = NULL;
        b = reverse(b);
        ListNode* t1 = a;
        ListNode* t2 = b;

        while( t2 != NULL){
            if(t1->val != t2->val) return false;
            t1 = t1->next;
            t2 = t2->next;
        }
        return true;
    }


    // bool isPalindrome(ListNode* head) {
    //     if(head->next == NULL) return true;


    //     // deep copy ke liye
    //     ListNode* copy = new ListNode(head->val); 
    //     ListNode* temp = head;
    //     ListNode* temp1 = copy;
    //     while(temp->next != NULL){
    //         temp = temp->next;
    //         temp1->next = new ListNode(temp->val);
    //         temp1 = temp1->next;
    //     }

    //     // reversing list
    //     ListNode* prev = NULL;
    //     ListNode* current = head;
    //     while( current != NULL){
    //         ListNode* fwd = current->next;
    //         current->next = prev;
    //         prev = current;
    //         current = fwd;
    //     }


    //     // comparing for palindrom
    //     ListNode* v = copy;
    //     ListNode* temp2 = prev;
    //     while( v != NULL && temp2 != NULL){
    //         if(v->val != temp2->val) return false;
    //         v= v->next;
    //         temp2 = temp2->next;
    //     }

    //     return true;
    // }
};