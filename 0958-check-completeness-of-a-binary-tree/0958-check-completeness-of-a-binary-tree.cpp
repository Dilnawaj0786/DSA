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
    int get(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + get(root->left) + get(root->right);
    }
    bool isCBT(TreeNode* root, int idx, int& size){
        if(root == NULL) return true;
        if(idx > size) return false;
        return isCBT(root->left,2*idx,size) && isCBT(root->right,2*idx+1,size);
    }
    bool isCompleteTree(TreeNode* root) {
        int size = get(root);
        return isCBT(root,1,size);
    }
};