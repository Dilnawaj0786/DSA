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
    int getsum(vector<int>& nums){
        int sum = 0;
        for(int ele : nums) sum += ele;
        return sum;
    }
    void findpath(TreeNode* root, vector<vector<int>>& ans, vector<int>& arr, int target){
        if(root == NULL) return;
        arr.push_back(root->val);
        int sum = getsum(arr);
        if(root->left == NULL && root->right == NULL && sum == target) ans.push_back(arr);
        findpath(root->left,ans,arr,target);
        findpath(root->right,ans,arr,target);
        arr.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> arr;
        findpath(root,ans,arr,targetSum);
        return ans;
    }
};