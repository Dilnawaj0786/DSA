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
    bool flag = false;
    void find(TreeNode* root, int& mn,int& smn){
        if(root == NULL) return;
        mn = min(mn,root->val);
        if(root->val > mn && root->val <= smn){
            flag = true;
            smn = root->val;
        }
        find(root->left,mn,smn);
        find(root->right,mn,smn);
    }
    int findSecondMinimumValue(TreeNode* root) {
        int smn = INT_MAX;
        int mn = INT_MAX;
        find(root,mn,smn);
        return (flag) ? smn : -1;
    }
};