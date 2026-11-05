
class Solution {
public:
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        int leftl = levels(root->left);
        int rightl = levels(root->right);
        return 1 + max(leftl,rightl);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int n = levels(root);
        vector<vector<int>> ans(n,vector<int>(0));
        queue<pair<TreeNode*,int>>q;
        if(root != NULL) q.push({root,0});
        while(q.size() > 0){
            pair front = q.front();
            q.pop();
            TreeNode* node = front.first;
            int level = front.second;
            ans[level].push_back(node->val);
            if(node-> left != NULL) q.push({node->left,level+1});
            if(node-> right != NULL) q.push({node->right,level+1});
        }
        return ans;

    // class pair{
    // public:
    //     TreeNode* node;
    //     int level;
    //     pair(TreeNode* node, int level){
    //         this->node = node;
    //         this->level = level;
    //     }
    // };
    // int levels(TreeNode* root){
    //     if(root == NULL) return 0;
    //     int leftl = levels(root->left);
    //     int rightl = levels(root->right);
    //     return 1 + max(leftl,rightl);
    // }
    // vector<vector<int>> levelOrder(TreeNode* root) {
    //     int n = levels(root);
    //     vector<vector<int>> ans(n,vector<int>(0));
    //     queue<pair>q;
    //     if(root != NULL) q.push({root,0});
    //     while(q.size() > 0){
    //         pair front = q.front();
    //         q.pop();
    //         TreeNode* node = front.node;
    //         int level = front.level;
    //         ans[level].push_back(node->val);
    //         if(node-> left != NULL) q.push({node->left,level+1});
    //         if(node-> right != NULL) q.push({node->right,level+1});
    //     }
    //     return ans;

    }
};