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
    class Triplet{
    public:
        long long max;
        long long min;
        bool isBst;
        long long sum;
    };
    long long maxsum;
    Triplet getsum(TreeNode* root){
        if(root == NULL) return {LLONG_MIN,LLONG_MAX,true,0};
        Triplet left = getsum(root->left);
        Triplet right = getsum(root->right);
        long long val = root->val;
        long long mx = max(val,max(left.max,right.max));
        long long mn = min(val,min(left.min,right.min));
        bool isbst = (val > left.max && val < right.min && left.isBst && right.isBst);
        long long sum = val + left.sum + right.sum;
        if(isbst) maxsum = max(sum,maxsum);
        return {mx,mn,isbst,sum};
    }
    int maxSumBST(TreeNode* root) {
        maxsum =0;
        getsum(root);
        return maxsum;
    }
};