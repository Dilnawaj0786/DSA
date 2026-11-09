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
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        int LT = levels(root->left);
        int RT = levels(root->right);
        return 1 + max(LT,RT);
    }

    void largest(TreeNode* root, vector<int>& ans, int lvl){
        if(root == NULL) return;
        ans[lvl] = max(ans[lvl],root->val);
        largest(root->left,ans,lvl+1);
        largest(root->right,ans,lvl+1);
    }
    vector<int> largestValues(TreeNode* root) {
        int n = levels(root);
        vector<int> ans(n,INT_MIN);
        largest(root,ans,0);
        return ans;
    }
};