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
    void findBinary(TreeNode* root, vector<string>& ans,string x){
        if(root == NULL) return;
        char ch = (root->val)+'0';
        x.push_back(ch);
        if(root->left == NULL && root->right == NULL){
            ans.push_back(x);
            return;
        }
        findBinary(root->left,ans,x);
        findBinary(root->right,ans,x);
    }

    int decimalV(string x){
        int ans = 0;
        int j = x.size()-1;
        int pw = 0;
        while(j >= 0){
            int msb = x[j]-'0';
            int n = msb * pow(2,pw);
            pw++;
            ans += n;
            j--;
        }
        return ans;
    }
    int sumRootToLeaf(TreeNode* root) {
        vector<string>ans;
        findBinary(root,ans,"");
        int sum =0;
        for(int i=0;i<ans.size();i++){
            sum += decimalV(ans[i]);
        }
        return sum;
    }
};