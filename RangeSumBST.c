/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void sum(struct TreeNode* root, int low, int high, int *soma){
    if(root==NULL){return;}

    sum(root->left, low, high, soma);
    sum(root->right, low, high, soma);

    if((root->val)>=low && (root->val)<=high){
        *soma+=root->val;
    }
}

int rangeSumBST(struct TreeNode* root, int low, int high) {
    int *soma=malloc(sizeof(int)*1);
    *soma=0;
    sum(root, low, high, soma);
    return (*soma);
}