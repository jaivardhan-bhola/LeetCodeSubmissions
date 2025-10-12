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
    unordered_set<int> a;
public:
    bool findTarget(TreeNode* root, int k) {
        if (!root) return false;
        if(a.count(k-root->val)) return true;
        a.insert(root->val);
        return findTarget(root->left, k) || findTarget(root->right, k);
    }
};