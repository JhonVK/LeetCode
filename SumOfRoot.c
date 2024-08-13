/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int sum(struct TreeNode *root, int sum1){
    if(!root){
        return 0;
    }else{
        sum1=sum1*2+root->val;
    }   
    if(!root->left && !root->right){
        return sum1;
    }
    int left=sum(root->left, sum1);
    int right=sum(root->right, sum1);

    return left+right;
}

int sumRootToLeaf(struct TreeNode* root) {
    return sum(root, 0);
}