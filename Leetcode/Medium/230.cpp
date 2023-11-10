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
    void inorder(TreeNode* root,vector<int> &vc) {
        if(root==NULL) return;
        inorder(root->left,vc);
        vc.push_back(root->val);
        inorder(root->right,vc);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> vc;
        inorder(root,vc);
        return vc[k-1];
    }
};