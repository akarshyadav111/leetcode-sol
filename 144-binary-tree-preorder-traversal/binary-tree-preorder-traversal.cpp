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
    // void solve(TreeNode* root, vector<int>& v){
    //     if(!root) return;
    //     v.push_back(root->val);
    //     solve(root->left, v);
    //     solve(root->right, v);
    // }

    vector<int> preorderTraversal(TreeNode* root) {
        // vector<int> v;
        // solve(root, v);
        // return v;
        vector<int> pre;
        if(!root) return pre;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            root = st.top();
            st.pop();
            pre.push_back(root->val);
            if(root->right != NULL) st.push(root->right);
            if(root->left != NULL) st.push(root->left);
        }
        return pre;
    }
};