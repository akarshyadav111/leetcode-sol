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
    void solve(TreeNode* root, int t, vector<vector<int>>& ans, vector<int>& v){
        if(!root) return;
        v.push_back(root->val);
        if(!root->left && !root->right){
            if(t == root->val) ans.push_back(v);
        }
        solve(root->left, t - root->val, ans, v);
        solve(root->right, t - root->val, ans, v);
        v.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> v;
        solve(root, targetSum, ans, v);
        return ans;
    }
};