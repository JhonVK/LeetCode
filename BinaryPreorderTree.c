/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void listar(struct TreeNode* root, int* returnSize, int *vetor){
    if(root!=NULL){
    vetor[(*returnSize)++]=root->val;
    listar(root->left, returnSize, vetor);
    listar(root->right, returnSize, vetor);
    }else{
        return;
    }
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize=0;
    if (root == NULL) {
        return NULL;
    }
    int *vetor=(int *)malloc(sizeof(int)*100);
    listar(root, returnSize, vetor);
    return vetor;
}
