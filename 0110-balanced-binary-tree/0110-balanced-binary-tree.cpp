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
    bool ans;
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        int leftl = levels(root->left);
        int rightl = levels(root->right);
        if(abs(leftl-rightl) > 1) ans = false;
        return 1 + max(leftl,rightl);
    }
    bool isBalanced(TreeNode* root) {
        ans = true;
        levels(root);
        return ans;
    }
    // int levels(TreeNode* root){
    //     if(root == NULL) return 0;
    //     return 1 + max(levels(root->left),levels(root->right));
    // }
    // bool isBalanced(TreeNode* root) {
    //     if(root == NULL) return true;
    //     if(abs(level(root->left)-levels(root->right)) > 1) return false;
    //     return isBalanced(root->left) && is balanced(root->right);
    // }
};