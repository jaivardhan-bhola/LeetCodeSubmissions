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
    void count(TreeNode* root, int& ans){
        if (root == nullptr) return;
        ans += 1;
        count(root->left,ans);
        count(root->right,ans);
    }
    int countNodes(TreeNode* root) {
        int ans=0;
        count(root, ans);
        return ans;
    }
};