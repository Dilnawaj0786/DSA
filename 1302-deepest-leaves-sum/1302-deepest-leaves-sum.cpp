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
        int lt = levels(root->left);
        int rt = levels(root->right);
        return 1 + max(lt,rt);
    }
    void getsum(TreeNode* root, int lvl,int& sum, int n){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL && lvl == n) sum += root->val;
        getsum(root->left,lvl+1,sum,n);
        getsum(root->right,lvl+1,sum,n);
    }
    int deepestLeavesSum(TreeNode* root) {
        int n = levels(root);
        int sum = 0;
        getsum(root,0,sum,n-1);
        return sum;

    }
};