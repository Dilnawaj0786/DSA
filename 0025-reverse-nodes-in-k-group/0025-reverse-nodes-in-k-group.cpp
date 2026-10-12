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

    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr != NULL){
            ListNode* fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
       ListNode* temp = head;
       vector<ListNode*> list;
       int n = k;
       while(temp != NULL){
            ListNode* dummy = new ListNode(-1);
            ListNode* t = dummy;
            while(n != 0 &&  temp != NULL){
                ListNode* nextNode = temp->next;
                t->next = temp;
                t = t->next;
                temp = nextNode;
                t->next = NULL;
                n--;
            }
            if(n == 0){
                ListNode* r = reverse(dummy->next);
                list.push_back(r);
                n = k;
            }else{
                list.push_back(dummy->next);
            }
       }
       ListNode* ans = new ListNode(-1);
       ListNode* t = ans;
       t->next = list[0];
       for(int i=1;i<list.size();i++){
            while(t->next != NULL){
                t = t->next;
            }
            t->next = list[i];
       }
       return ans->next;
    }
};