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
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL){
            if(fast->val == 0) fast = fast->next;
            long long sum = 0;
            while(fast != NULL && fast->val != 0 ){
                sum += fast->val;
                fast = fast->next;
            }
            if(sum != 0){
                slow->val = sum;
                fast = fast->next;
                slow->next = fast;
                slow = slow->next;
            }
        }
        return head;
    }
    // ListNode* mergeNodes(ListNode* head) {
    //     ListNode* dummy = new ListNode(-1);
    //     ListNode* d = dummy;
    //     ListNode* temp = head;
    //     while(temp != NULL){
    //         if(temp->val == 0) temp = temp->next;
    //         long long sum = 0;
    //         while(temp != NULL && temp->val != 0 ){
    //             sum += temp->val;
    //             temp = temp->next;
    //         }
    //         if(sum != 0){
    //             ListNode* n = new ListNode(sum);
    //             d->next = n;
    //             d = d->next;
    //         }
    //     }
    //     return dummy->next;
    // }
};