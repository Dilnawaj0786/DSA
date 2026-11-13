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
    // method 1
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL) return new TreeNode(val);
        else if(root->val > val){
            root->left = insertIntoBST(root->left,val);
        }else{
            root->right = insertIntoBST(root->right,val);
        }
        return root;
    }
    // method 2
    // void insert(TreeNode*& root,int x){
    //     if(root == NULL) {
    //         root = new TreeNode(x);
    //         return;
    //     }
    //     if(root->left == NULL && root->right == NULL && root->val < x){
    //         TreeNode* node = new TreeNode(x);
    //         root->right = node;
    //         return;
    //     }else if(root->left == NULL && root->right == NULL && root->val > x){
    //         TreeNode* node = new TreeNode(x);
    //         root->left = node;
    //         return;
    //     }else if(root->val > x){
    //         insert(root->left,x);
    //     }else{
    //         insert(root->right,x);
    //     }
    // }
    // TreeNode* insertIntoBST(TreeNode* root, int val) {
    //     if(root == NULL){
    //         return new TreeNode(val);
    //     }
    //     insert(root,val);
    //     return root;
    // }
};