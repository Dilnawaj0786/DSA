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
    ListNode* insertionSortList(ListNode* head) {
        vector<int> nums;
        ListNode* temp = head;
        while(temp != NULL){
            nums.push_back(temp->val);
            temp = temp->next;
        }

        // insertion sort
        for(int i=1;i<nums.size();i++){
            int j = i;
            while( j >= 1 && nums[j] < nums[j-1]){
                swap(nums[j],nums[j-1]);
                j--;
            }
        }
        temp = head;
        int k =0;
        while(temp != NULL){
            temp->val = nums[k++];
            temp = temp->next;
        }
        return head;
    }
};