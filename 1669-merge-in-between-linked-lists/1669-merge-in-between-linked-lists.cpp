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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int i =0;
        ListNode* temp = list1;
        ListNode* x = temp;
        while(i < a-1){
            temp = temp->next;
            x = x->next;
            i++;
        }
        while(i < b){
            x = x->next;
            i++;
        }
        ListNode * temp2 = list2;
        while(temp2->next != NULL) temp2= temp2->next;
        temp2->next = x->next;
        temp->next = list2;
        return list1;
    }
};