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
    void path(TreeNode* root, vector<string>& ans, string& p){
        if(!root) return;
        int len = p.length();
        p += to_string(root->val);
        if(!root->left && !root->right){
            ans.push_back(p);
            p.resize(len);  
            return;
        }
        p+="->";
        path(root->left, ans, p);
        path(root->right, ans, p);
        p.resize(len);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string p = "";
        path(root, ans, p);
        return ans;
    }
};