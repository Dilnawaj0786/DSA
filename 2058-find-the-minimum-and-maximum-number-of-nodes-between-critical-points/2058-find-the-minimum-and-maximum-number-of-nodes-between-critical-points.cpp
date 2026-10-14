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
    int length(ListNode* head){
        ListNode* temp = head;
        int len =0;
        while(temp != NULL){
            temp = temp->next;
            len++;
        }
        return len;
    }
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int getlength = length(head);
        if(getlength <= 3) return {-1,-1};
        vector<int> minimaidx;
        vector<int> maxidx;
        ListNode* prev = head;
        ListNode* mid = prev->next;
        ListNode* after = mid->next;
        int count = 2;
        while(after != NULL){
            // local maxima
            if(mid->val > prev->val && mid->val > after->val){
                maxidx.push_back(count);
            }else if(mid->val < prev->val && mid->val < after->val){
                minimaidx.push_back(count);
            }
            count++;
            after = after->next;
            prev = prev->next;
            mid = mid->next;
        }
        vector<int> ans ;
        for(int idx : minimaidx) ans.push_back(idx);
        for(int idx : maxidx) ans.push_back(idx);
        sort(ans.begin(),ans.end());
        if(ans.size() < 2 ) return {-1,-1};
        int max = abs(ans[0]-ans[ans.size()-1]);
        int mini = INT_MAX;
        for(int i=0;i<=ans.size()-2;i++){
            mini = min(mini,abs(ans[i]-ans[i+1]));
        }
        return {mini,max};
    }
};