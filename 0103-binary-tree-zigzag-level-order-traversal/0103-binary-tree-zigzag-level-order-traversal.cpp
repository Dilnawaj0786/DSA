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

    void zigzag(TreeNode* root,vector<vector<int>>& ans,int lvl){
        if(root == NULL) return;
        ans[lvl].push_back(root->val);
        zigzag(root->left,ans,lvl+1);
        zigzag(root->right,ans,lvl+1);
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int n = levels(root);
        vector<vector<int>> ans(n);
        // vector<int> arr(n);
        zigzag(root,ans,0);
        for(int i=0;i<ans.size();i++){
            if(i % 2 != 0) reverse(ans[i].begin(),ans[i].end());
        }
        return ans;

    }
};