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
 void preOrdem(struct TreeNode* raiz, int* vetor, int* returnSize) {
    if (raiz == NULL)
        return;

    preOrdem(raiz->left, vetor, returnSize);

    vetor[*returnSize] = raiz->val;
    (*returnSize)++;


    preOrdem(raiz->right, vetor, returnSize);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int *vetor=(int *)malloc(sizeof(int)*120);
    *returnSize=0;
    preOrdem(root, vetor, returnSize);
    return vetor;
}