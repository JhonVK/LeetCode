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
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
      *returnSize=0;
    if (root == NULL) {
        return NULL;
    }
    int *vetor=(int *)malloc(sizeof(int)*10);
    listar(root, returnSize, &vetor);
    return vetor;
}
void listar(struct TreeNode* root, int* returnSize, int **vetor) {
    if (root != NULL) {
        listar(root->left, returnSize, vetor);
        listar(root->right, returnSize, vetor);

        if (*returnSize % 10 == 0) {  
            *vetor = realloc(*vetor, (*returnSize + 10) * sizeof(int));
        }
        (*vetor)[(*returnSize)++] = root->val;
    }
}