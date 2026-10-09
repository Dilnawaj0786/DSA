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
    int gcd(int x,int y){
        if(x == 0) return y;
        return gcd(y%x,x);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        ListNode* dummy = new ListNode(-1);
        ListNode* t = dummy;
        int a = temp->val;
        t->next = temp;
        temp = temp->next;
        t = t->next;
        while(temp != NULL){
            int c = a;
            a = temp->val;
            int x = gcd(c,a);
            ListNode* y = new ListNode(x);
            t->next = y;
            t = t->next;
            t->next = temp;
            t= t->next;
            temp = temp->next; 
        }
        return dummy->next;
    }
};