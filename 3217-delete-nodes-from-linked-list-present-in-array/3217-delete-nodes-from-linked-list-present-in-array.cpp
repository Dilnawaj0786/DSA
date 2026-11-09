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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        vector<int> freq(100001,0);
        for(int ele : nums) freq[ele]++;
        ListNode* dummy = new ListNode(-1);
        ListNode* d = dummy;
        ListNode* temp = head;
        while(temp != NULL){
            if(freq[temp->val] > 0){
                temp = temp->next;
            }else{
                ListNode* n = new ListNode(temp->val);
                d->next = n;
                d = d->next;
                temp = temp->next;
            }
        }
        return dummy->next;

    }
};