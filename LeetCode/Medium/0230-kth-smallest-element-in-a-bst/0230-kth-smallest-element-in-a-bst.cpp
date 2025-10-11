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
    int res=-1, counter=0; 
    int kthSmallest(TreeNode* root, int k) {
      if (root==nullptr) return -1;
        
        kthSmallest(root->left, k);
        if(res != -1) return res;
        
        counter++;
        if (counter==k) {
            res=root->val;
            return res;
        } 
        
        kthSmallest(root->right, k);
        return res;  
    }
};