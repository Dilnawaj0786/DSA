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
    void print(TreeNode* root, vector<vector<string>>& ans, int m, int n,int height){
        if(root == NULL) return;
        ans[m][n] = to_string(root->val);
        int n1 = (n-pow(2,height-m-1));
        int n2 = (n+pow(2,height-m-1));
        print(root->left,ans,m+1,n1,height);
        print(root->right,ans,m+1,n2,height);
    }
    vector<vector<string>> printTree(TreeNode* root) {
        int n = levels(root);
        int ht = n-1;
        int rows = ht+1;
        int cols = pow(2,rows)-1;
        vector<vector<string>> ans(rows,vector<string>(cols,""));
        print(root,ans,0,(cols-1)/2,ht);
        return ans;
    }
};