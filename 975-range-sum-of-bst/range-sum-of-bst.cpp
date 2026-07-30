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
    void solve(TreeNode* root, int l, int h, int& sum){
        if(!root) return;
        if(root->val < l) solve(root->right, l, h, sum);
        else if(root->val > h) solve(root->left, l, h, sum);
        else{
            solve(root->left, l, h, sum);
            if(root->val >= l && root->val <= h) sum += root->val;
            solve(root->right, l, h, sum);
        }
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum{};
        solve(root, low, high, sum);
        return sum;
    }
};