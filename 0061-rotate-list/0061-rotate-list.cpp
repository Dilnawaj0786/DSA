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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;
        int n = 0;
        ListNode* x = head;
        while(x != NULL){
            n++;
            x = x->next;
        }
        k = k%n;
        ListNode* temp = head;
        if(k == 0) return head;
        ListNode* a = head;
        ListNode* b = head;
        ListNode* c = head;
        for(int i=1;i<=n;i++){
            if(i==n-k) a = temp;
            if(i==n-k+1) b = temp;
            if(i==n) c = temp;
            temp = temp->next;
        }
        a->next = NULL;
        c->next = head;
        return b;
    }
};