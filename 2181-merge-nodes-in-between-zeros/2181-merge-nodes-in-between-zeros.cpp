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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        ListNode* d = dummy;
        ListNode* temp = head;
        while(temp != NULL){
            if(temp->val == 0) temp = temp->next;
            long long sum = 0;
            while(temp != NULL && temp->val != 0 ){
                sum += temp->val;
                temp = temp->next;
            }
            if(sum != 0){
                ListNode* n = new ListNode(sum);
                d->next = n;
                d = d->next;
            }
        }
        return dummy->next;
    }
};