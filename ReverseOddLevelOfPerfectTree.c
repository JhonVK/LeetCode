/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void inverter(struct TreeNode* left, struct TreeNode* right, int paridade ){
    if(left==NULL){
        return;
    }
    if(paridade%2==1){
        int temp=right->val;
        right->val=left->val;
        left->val=temp;
    }
    paridade++;
    inverter(left->left, right->right, paridade);
    inverter(left->right, right->left, paridade);
}
struct TreeNode* reverseOddLevels(struct TreeNode* root) {
    int paridade=1;
    inverter(root->left, root->right, paridade);
    return root;
}