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
        int leftT = levels(root->left);
        int rightT = levels(root->right);
        return 1 + max(leftT,rightT);
    }
    void levelsum(TreeNode* root,vector<double>& ans,vector<int>& countnodes,int lvl){
        if(root == NULL) return;
        ans[lvl] += root->val;
        countnodes[lvl]++;
        levelsum(root->left,ans,countnodes,lvl+1);
        levelsum(root->right,ans,countnodes,lvl+1);
    }
    vector<double> averageOfLevels(TreeNode* root) {
        int n = levels(root);
        vector<double>ans(n);
        vector<int> countnodes(n);
        levelsum(root,ans,countnodes,0);

        for(int i=0;i<ans.size();i++) ans[i] = (ans[i]/countnodes[i]);
        return ans;
    }
};