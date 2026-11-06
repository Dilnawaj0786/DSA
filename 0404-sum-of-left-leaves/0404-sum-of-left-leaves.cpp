
class Solution {
public:
    void findsum(TreeNode* root,int& sum){
        if(root == NULL) return;
        if(root->left != NULL && root->left->left == NULL && root->left->right == NULL) sum += root->left->val;
        findsum(root->left,sum);
        findsum(root->right,sum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        findsum(root,sum);
        return sum;
    }
};