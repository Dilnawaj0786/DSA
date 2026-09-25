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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL) return NULL; // checking list is empty
         while(head != NULL && head->val == val){ // continues duplicates values
            head = head->next;
        }
        if(head == NULL) return NULL; // checking list  is empty
        ListNode* temp = head;
        while(temp->next != NULL){
            if(temp->next->val == val){
                temp->next = temp->next->next;// removing duplicates
            }else temp = temp->next;
        }
       
        return head;
    }
};