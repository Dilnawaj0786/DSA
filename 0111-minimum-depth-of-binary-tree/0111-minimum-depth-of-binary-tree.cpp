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
    int depth;
    int findD(TreeNode* root ,int d){
        if(root == NULL) return 0;
        d++;
        int lt = findD(root->left,d);
        int Rt = findD(root->right,d);
        int x =  1 + max(lt,Rt);
        if(root->left == NULL && root->right == NULL){
            depth = min(d,depth);
        }
        return x;
    }
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        depth = INT_MAX;
        int d = 0;
        int y = findD(root,0);
        return depth;
    }
};