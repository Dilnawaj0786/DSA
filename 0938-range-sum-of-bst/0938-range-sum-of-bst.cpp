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
    void find(TreeNode* root,int st,int end,int& sum){
        if(root == NULL) return;
        if(root->val >= st && root->val <= end){
            sum += root->val;
            find(root->left,st,end,sum);
            find(root->right,st,end,sum);
        } 
        else if(root->val > end) find(root->left,st,end,sum);
        else find(root->right,st,end,sum);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        find(root,low,high,sum);
        return sum;
    }
};