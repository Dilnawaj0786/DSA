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
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummy1 = new ListNode(-1);
        ListNode* dummy2 = new ListNode(-1);
        ListNode* ans  = dummy1;
        ListNode* ans2  = dummy2;
        ListNode* temp  = head;

        while(temp != NULL){
            if(temp->val < x){// put int dummy1
                ans->next = temp;
                temp = temp->next;
                ans = ans->next;
            }else{// put in dummy 2
                ans2->next = temp;
                temp = temp->next;
                ans2 = ans2->next;
            }
        }
        ans2->next = NULL;
        ans->next = dummy2->next;
        return dummy1->next;
    }
};