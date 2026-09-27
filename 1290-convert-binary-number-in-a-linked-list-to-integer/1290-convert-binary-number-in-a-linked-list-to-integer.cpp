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
    int getlength(ListNode* head){
        ListNode* temp = head;
        int l = 0;
        while(temp != NULL){
            temp = temp->next;
            l++;
        }
        return l;
    }
    int getDecimalValue(ListNode* head) {
        int size = getlength(head);
        size--;
        int ans = 0;
        ListNode* temp = head;
        while(temp != NULL){
            if(temp->val == 1){
                ans += pow(2,size);
            }
            size--;
            temp = temp->next;
        }
        return ans;
    }
};