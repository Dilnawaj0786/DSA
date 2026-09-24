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
    ListNode* middleNode(ListNode* head) {
        int i=0;
        ListNode* temp = head;
        while(temp != NULL){
            i++;
            temp = temp->next;
        }
        if(i % 2 == 0){
            i = (i/2)+1;
            for(int j=0;j<i-1;j++){
                head = head->next;
            }
        }else{
            i = (i/2);
            ListNode* n = head;
            for(int j=0;j<i;j++){
                head = head->next;
            }
        }
        return head;
    }
};