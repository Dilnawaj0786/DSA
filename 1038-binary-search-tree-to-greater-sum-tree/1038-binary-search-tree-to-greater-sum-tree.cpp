/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void findnum(TreeNode* root,vector<int>& nums){
        if(root == NULL) return;
        findnum(root->left,nums);
        nums.push_back(root->val);
        findnum(root->right,nums);
    }
    int i=0;
    void gst(TreeNode*& root,vector<int>& nums){
        if(root == NULL) return;
        gst(root->left,nums);
        root->val = nums[i++];
        gst(root->right,nums);
    }
    TreeNode* bstToGst(TreeNode* root) {
        vector<int> nums;
        findnum(root,nums);
        int total = 0;
        for(int ele : nums) total += ele;
        int currsum =0;
        vector<int> ans;
        ans.push_back(total);
        for(int i=1;i<nums.size();i++){
            currsum += nums[i-1];
            ans.push_back(total-currsum);
        }
        gst(root,ans);
        return root;
    }
};