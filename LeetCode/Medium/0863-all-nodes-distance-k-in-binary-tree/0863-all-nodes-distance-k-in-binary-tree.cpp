/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:  
        vector<int> v ;
        int find(TreeNode* root, TreeNode* target, int k) {
        if (root == nullptr) return -1;
        if (root == target) {
            dfs(root, k);
            return 1;
        }
        int left = find(root->left, target, k);
        if (left > 0) {
            dfs(root->right, k - left - 1);
            if (left == k) v.push_back(root->val);
            return left + 1;
        }
        int right = find(root->right, target, k);
        if (right > 0) {
            dfs(root->left, k - right - 1);
            if (right == k) v.push_back(root->val);
            return right + 1;
        }
        return -1;
    }
   void dfs(TreeNode* root, int k) {
        if (root == nullptr || k < 0) return;

        if (k == 0) {
            v.push_back(root->val);
            return;
        }

        dfs(root->left, k - 1);
        dfs(root->right, k - 1);
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        find(root, target, k);
        return v;
    }
};