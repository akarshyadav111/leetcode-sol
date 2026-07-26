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
// class Solution {
// public:
//     bool find(TreeNode* root, int k, unordered_set<int>& seen){
//         if(!root) return false;
//         find(root->left, k, seen);
//         if(seen.count(k - root->val)) return true;
//         seen.insert(root->val);
//         return find(root->right, k, seen);
//     }
    
//     bool findTarget(TreeNode* root, int k) {
//         unordered_set<int> seen;
//         return find(root, k, seen);
//     }
// };
class Solution {
public:
    bool find(TreeNode* root, int k, unordered_set<int>& seen) {
        if (!root) return false;
        
        // 1. Check left subtree — if found, return true immediately!
        if (find(root->left, k, seen)) return true;
        
        // 2. Check current node
        int complement = k - root->val;
        if (seen.count(complement)) return true; // Found the matching pair!
        
        // Record current node's value for future nodes
        seen.insert(root->val);
        
        // 3. Check right subtree
        return find(root->right, k, seen);
    }
    
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> seen;
        return find(root, k, seen);
    }
};