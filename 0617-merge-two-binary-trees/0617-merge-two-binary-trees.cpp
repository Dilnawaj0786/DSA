class Solution {
public:
    TreeNode* merge(TreeNode* root1, TreeNode* root2){
        if(root1 == NULL ) return root2;
        if(root2 == NULL ) return root1;
        root1->val += root2->val;
        root1->left = merge(root1->left,root2->left);
        root1->right = merge(root1->right,root2->right);
        return root1;
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1 == NULL) return root2;
        if(root2 == NULL) return root1;
        merge(root1,root2);
        return root1;
    }
};