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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head;
        ListNode* prev = head;
        int x = 0;
        while(prev != NULL){
            temp = prev->next;
            x = 0;
                while( temp != NULL){
                    if(prev->val < temp->val){
                        x = temp->val;
                        break;
                    }
                    temp = temp->next;
                }
            ans.push_back(x);
            prev = prev->next;
        }
        return ans;
    }
};