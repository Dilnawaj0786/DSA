class Solution {
public:
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        int leftl = levels(root->left);
        int rightl = levels(root->right);
        return 1 + max(leftl,rightl);
    }

    void dfs(TreeNode* root, vector<int>& ans,int level){
        if(root == NULL) return;
        ans[level] = (root-> val);
        dfs(root->left,ans,level+1);
        dfs(root-> right,ans,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        int n = levels(root);
        vector<int> ans(n);
        dfs(root,ans,0);
        return ans;
    }
};