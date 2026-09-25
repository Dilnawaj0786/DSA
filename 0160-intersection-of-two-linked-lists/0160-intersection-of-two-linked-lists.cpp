/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getlength(ListNode *head){
        int x = 0;
        ListNode* temp = head;
        while(temp != NULL){
            temp = temp->next;
            x++;
        }
        return x;

    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = getlength(headA);
        int lenB = getlength(headB);
        int x = 0;
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;

        if(lenA > lenB){
            x = lenA-lenB;
            for(int i=0;i<x;i++){
                temp1= temp1->next;
            }
            
        }else{
            x = abs(lenA-lenB);
            for(int i=0;i<x;i++){
                temp2= temp2->next;
            }
        }
        while(temp1 != temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp1;
    }
};