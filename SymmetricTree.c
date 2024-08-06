/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool help(struct TreeNode* right, struct TreeNode* left){
    if(right==NULL || left==NULL){
        return left==right;
    }

    if(right->val!=left->val){
        return false;
    }
   
    return (help(right->right, left->left) && help(right->left, left->right));
   
}

bool isSymmetric(struct TreeNode* root) {
   return help(root->right, root->left);
}