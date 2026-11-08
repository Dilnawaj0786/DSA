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
    int maxele(vector<int>& nums, int st, int end){
        int maxe = INT_MIN;
        int idx = -1;
        for(int i=st;i<=end;i++){
            if(nums[i] > maxe){
                maxe = nums[i];
                idx = i;
            }
        }
        return idx;
    }

    void construct(TreeNode*& root, vector<int>& nums, int st, int end ){
        int idx = maxele(nums,st,end);
        if(idx != -1) root = new TreeNode(nums[idx]);
        else return;
        construct(root->left,nums,st,idx-1);
        construct(root->right,nums,idx+1,end);

    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        TreeNode* root  = nullptr;
        int n = nums.size()-1;
        construct(root,nums,0,n);
        return root;
    }
};