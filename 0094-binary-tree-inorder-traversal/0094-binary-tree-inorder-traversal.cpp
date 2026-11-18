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

    void morris(TreeNode* root,vector<int>& ans){
        TreeNode* curr = root;
        while(curr != NULL){
            if(curr->left != NULL){
                // find predecessor
                TreeNode* p = curr->left;
                while(p->right != NULL && p->right != curr) p = p->right;
                //linking
                if(p->right == NULL){
                    p->right = curr;
                    curr= curr->left;
                }else{// p->right == curr
                    p->right = NULL;
                    ans.push_back(curr->val);
                    curr = curr->right;
                }

            }else{
                ans.push_back(curr->val);
                curr = curr->right;
            }
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        morris(root,ans);
        return ans;
    }
    // void dfs(TreeNode* root, vector<int>& ans){
    //     if(root == NULL) return;
    //     dfs(root->left,ans);
    //     ans.push_back(root-> val);
    //     dfs(root-> right,ans);

    // }
    // vector<int> inorderTraversal(TreeNode* root) {
    //     vector<int> ans;
    //     dfs(root,ans);
    //     return ans;
    // }
};