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

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* td = new ListNode(-1);
        ListNode* ta = list1;
        ListNode* tb = list2;
        ListNode* ans = td;   

        while(ta != NULL && tb != NULL){
            if(ta->val <= tb->val){
                td->next = ta;
                ta = ta->next;
            }else{
                td->next = tb;
                tb = tb->next;
            }
            td=td->next;
        }

        if(ta != NULL){
            td->next = ta;
        }

        if(tb != NULL)  td->next = tb;;
        return ans->next;
    }

    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* left = head;
        ListNode* right = slow->next;
        slow->next = NULL;

        left = sortList(left);
        right = sortList(right);
        return mergeTwoLists(left,right);
    }
};