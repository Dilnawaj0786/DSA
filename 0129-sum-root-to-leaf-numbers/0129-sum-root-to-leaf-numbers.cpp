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
    void numbers(TreeNode* root,int& sum,string& s){
        if(root == NULL) return;
        s.push_back(root->val+'0');
        if(root->left == NULL && root->right == NULL){
            sum += stoi(s);
        }
        numbers(root->left,sum,s);
        numbers(root->right,sum,s);
        s.pop_back();
    }
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        string s = "";
        numbers(root,sum,s);
        return sum;
    }
};