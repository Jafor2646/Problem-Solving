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
    // void inorder(TreeNode* root,vector<int> &vc) {
    //     if(root==NULL) return;
    //     inorder(root->left,vc);
    //     vc.push_back(root->val);
    //     inorder(root->right,vc);
    // }
    bool isBST(TreeNode* root, TreeNode* l, TreeNode* r){
        if(!root)
            return true;
        if((l && root->val <= l->val) || (r && root->val >= r->val))
            return false;
        return isBST(root->left, l, root) && isBST(root->right, root, r);
    }
    bool isValidBST(TreeNode* root) {
        // if(root->left == NULL && root->right == NULL) return true;
        // if(root->left == NULL){
        //     if(root->right->val > root->val) return isValidBST(root->right);
        //     else return false;
        // }
        // if(root->right == NULL){
        //     if(root->left->val < root->val) return isValidBST(root->left);
        //     else return false;
        // }
        // if((root->left->val < root->val) && (root->right->val > root->val)){
        //     return (isValidBST(root->left) && isValidBST(root->right));
        // } 
        // else return false;
        /*first one wrong and second one right */
        // vector <int> vc;
        // inorder(root, vc);
        // for(int i = 0; i<vc.size()-1;i++){
        //     if(vc[i]>=vc[i+1]) return false;
        // }
        // return true;
        return isBST(root, NULL, NULL);
    }
};