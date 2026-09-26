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
    int getLength(ListNode* head){
        ListNode* temp = head;
        int length = 0;
        while(temp != NULL){
            length++;
            temp = temp->next;
        }
        return length;
    }

    ListNode* getNode(ListNode* head1, ListNode* head2){
        ListNode* temp1 = head1;
        ListNode* temp2 = head2;

        while(temp1 != temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        if(temp1 == temp2) return temp1;
        return NULL;

    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int x = getLength(headA);
        int y = getLength(headB);
        if(x > y){
            ListNode* temp = headA;
            for(int i=0;i<(x-y);i++){
                temp = temp->next;
            }
            return getNode(temp,headB);
        }else{
            ListNode* temp = headB;
            for(int i=0;i<(y-x);i++){
                temp = temp->next;
            }
            return getNode(headA,temp);
        }
    }
};