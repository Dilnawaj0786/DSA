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
    bool areInverted(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL) return true;
        if(p == NULL || q == NULL) return false;
        if(p->val != q->val) return false;
        return areInverted(p->left,q->right) && areInverted(p->right,q->left);
    }

    bool isSymmetric(TreeNode* root) {
        return areInverted(root->left,root->right);
       
    }
    // TreeNode* invertTree(TreeNode* root) {
    //     // invert(root);
    //     if(root == NULL) return root;
    //     TreeNode* temp = root->left;
    //     root->left = invertTree(root->right);
    //     root->right = invertTree(temp);
    //     return root;
    // }

    // bool isSameTree(TreeNode* p, TreeNode* q) {
    //     if(p == NULL && q == NULL) return true;
    //     if(p == NULL || q == NULL) return false;
    //     if(p->val != q->val) return false;
    //     return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    // }
    // bool isSymmetric(TreeNode* root) {
    //     TreeNode* temp = invertTree(root->left);
    //     return isSameTree(temp,root->right);
    // }
};