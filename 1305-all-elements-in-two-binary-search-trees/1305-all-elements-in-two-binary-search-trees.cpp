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
    void getnums(TreeNode* root,vector<int>& nums){
        if(root == NULL) return;
        getnums(root->left,nums);
        nums.push_back(root->val);
        getnums(root->right,nums);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> nums1;
        vector<int> nums2;
        getnums(root1,nums1);
        getnums(root2,nums2);
        vector<int> ans;
        int i=0;
        int j=0;
        while(i<nums1.size() && j <nums2.size()){
            if(nums1[i] <= nums2[j]) ans.push_back(nums1[i++]);
            else ans.push_back(nums2[j++]);
        }
        while(i < nums1.size()) ans.push_back(nums1[i++]);
        while(j < nums2.size()) ans.push_back(nums2[j++]);
        return ans;
    }
};