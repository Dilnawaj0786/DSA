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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size () == 0) return NULL;
        if(lists.size() == 1) return lists[0];
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        ListNode* temp1 = lists[0];
        ListNode* temp2 = lists[1];

        while(temp1 != NULL && temp2 != NULL){
            if(temp1->val <= temp2->val){
                temp->next = temp1;
                temp1 = temp1->next;
            }else{
                temp->next = temp2;
                temp2 = temp2->next;
            }
            temp = temp->next;
        }

        if(temp1 == NULL) temp->next = temp2;
        if(temp2 == NULL) temp->next = temp1;

        ListNode* newdummy = dummy;
        for(int i=2;i<lists.size();i++){
            ListNode* finaldummy = new ListNode(-1);
            ListNode* temp5 = finaldummy;
            ListNode* dummy3 = lists[i];
            ListNode* temp3 = dummy3;
            ListNode* temp4 = newdummy->next;
            while(temp3 != NULL && temp4 != NULL){
                if(temp3->val <= temp4->val){
                    temp5->next = temp3;
                    temp3 = temp3->next;
                }else{
                    temp5->next = temp4;
                    temp4 = temp4->next;
                }
                temp5 = temp5->next;
            }
            
            if(temp3 == NULL) temp5->next = temp4;
            if(temp4 == NULL) temp5->next = temp3;
            newdummy = finaldummy;
        }
        return newdummy->next;
    }
};