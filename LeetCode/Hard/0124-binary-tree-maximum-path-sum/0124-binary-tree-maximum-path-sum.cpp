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
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        maxSum(root,ans);
        return ans;
    }
    int maxSum(TreeNode* root, int&ans){
        if (root==nullptr) return 0;
        int l=max(maxSum(root->left,ans), 0);
        int r=max(maxSum(root->right,ans), 0);
        int a = root->val+l+r;
        ans=max(a,ans);
        return root->val+max(l,r);
    }
};