/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 int Altura(struct TreeNode* pRaiz)
{
  int iEsq,iDir;

  if (pRaiz == NULL)
    return 0;

  iEsq = Altura(pRaiz->left);
  iDir = Altura(pRaiz->right);

  if ( iEsq > iDir )
    return iEsq + 1;
  else
    return iDir + 1;
}
int FB (struct TreeNode* pRaiz)
{
  if (pRaiz == NULL)
    return 0;
 
  return Altura(pRaiz->left) - Altura(pRaiz->right);
}

bool isBalanced(struct TreeNode* root) {
    if (root == NULL)
        return true;

    int balanceFactor = FB(root);

    if (abs(balanceFactor) > 1)
        return false;
        
    return isBalanced(root->left) && isBalanced(root->right);
}