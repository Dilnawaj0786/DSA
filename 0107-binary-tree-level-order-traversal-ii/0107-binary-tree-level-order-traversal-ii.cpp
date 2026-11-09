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
        int leftT = levels(root->left);
        int rightT = levels(root->right);
        return 1 + max(leftT,rightT);
    }
    void traversal(TreeNode* root,vector<vector<int>>& ans,int idx){
        if(root == NULL) return;
        ans[idx].push_back(root->val);
        traversal(root->left,ans,idx-1);
        traversal(root->right,ans,idx-1);

    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        int n = levels(root);
        vector<vector<int>> ans(n);
        int idx = n-1;
        traversal(root,ans,idx);
        return ans;
    }
};