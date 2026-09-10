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
    int c{};
    int dfs(TreeNode* root, int& sum){
        if(!root) return 0;
        sum += root->val;
        return 1 + dfs(root->left, sum) + dfs(root->right, sum);
    }
    int averageOfSubtree(TreeNode* root) {
        if(!root) return 0;
        int sum{};
        int num = dfs(root, sum);
        if(root->val == sum/num) c++;
        averageOfSubtree(root->left);
        averageOfSubtree(root->right);
        return c;
    }
};