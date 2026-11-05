
class Solution {
public:
    int dia;
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        int leftl = levels(root->left);
        int rightl = levels(root->right);
        dia = max(dia,leftl+rightl);
        return 1 + max(leftl,rightl);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        dia = 0;
        levels(root);
        return dia;
    }
};