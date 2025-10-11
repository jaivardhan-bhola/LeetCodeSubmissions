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
     void lvlOrder(vector<vector<long long>>& ans, TreeNode* root, int k, long long idx){
        if(!root) return;
        if (ans.size() <= k) ans.resize(k + 1);
        ans[k].push_back(idx);
        int l = idx*2 - ans[k][0];
        int r = idx*2+1 - ans[k][0];
        lvlOrder(ans, root -> left, k+1, l);
        lvlOrder(ans, root -> right, k+1, r);
    }
    int widthOfBinaryTree(TreeNode* root) {
        vector<vector<long long>> ans;
        lvlOrder(ans, root, 0, 0);
        long long maxW = 0;
        for(auto a: ans){
            maxW = max(maxW, a.back() - a.front() + 1);
        }
        return maxW;
    }
};