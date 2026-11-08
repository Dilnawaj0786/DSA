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
    int getLength(ListNode* head){
        ListNode* temp = head;
        int len = 0;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        return len;
    }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans;
        int size = getLength(head);
        if(size < k){
            ListNode* temp = head;
            while(temp != NULL && k > 0){
                ListNode* n = new ListNode(temp->val);
                temp = temp->next;
                ans.push_back(n);
                k--;
            }
            while(k > 0){
                ans.push_back(nullptr);
                k--;
            }
        }else{
            int extra = size % k;
            ListNode* temp = head;
            int firstpart = size / k;
            if(extra > 0){
                firstpart++;
                extra--;
            }
            ListNode* start = new ListNode(-1);
            ListNode* dummy = start;
            while(temp != NULL && firstpart > 0){
                ListNode* n = new ListNode(temp->val);
                dummy->next = n;
                dummy = dummy->next;
                temp = temp->next;
                firstpart--;
            }
            temp = temp;
            ans.push_back(start->next);
            int step = (size)/k;
            while(k > 1){
                int x = step;
                if(extra > 0){
                    x++;
                    extra--;
                }
                ListNode* start1 = new ListNode(-1);
                ListNode* dummy1 = start1;
                while(temp != NULL && x > 0){
                    ListNode* n = new ListNode(temp->val);
                    dummy1->next = n;
                    dummy1 = dummy1->next;
                    temp = temp->next;
                    x--;
                }
                k--;
                ans.push_back(start1->next);
            }
        }

        return ans;
    }
};