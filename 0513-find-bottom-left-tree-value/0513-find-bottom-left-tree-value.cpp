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
    // method 2
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        int lf = levels(root->left);
        int rf = levels(root->right);
        return 1 + max(lf,rf);
    }
    void leftview(TreeNode* root,vector<int>& ans, int lvl){
        if(root == NULL) return;
        ans[lvl] = root->val;
        leftview(root->right,ans,lvl+1);
        leftview(root->left,ans,lvl+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        int n = levels(root);
        vector<int>ans(n);
        leftview(root,ans,0);
        return ans[ans.size()-1];
    }
    // method 1
    // int levels(TreeNode* root){
    //     if(root == NULL) return 0;
    //     int lf = levels(root->left);
    //     int rf = levels(root->right);
    //     return 1 + max(lf,rf);
    // }
    // void leftmost(TreeNode* root, int n, int lvl, int& ans,bool& x){
    //     if(root == NULL) return;
    //     if(lvl == n){
    //         ans = root->val;
    //         x = true;
    //         return;
    //     }
    //     leftmost(root->left,n,lvl+1,ans,x);
    //     if(x == false)leftmost(root->right,n,lvl+1,ans,x);

    // }
    // int findBottomLeftValue(TreeNode* root) {
    //     int n = levels(root);
    //     bool x = false;
    //     int ans = 0;
    //     leftmost(root,n,1,ans,x);
    //     return ans;
    // }
};