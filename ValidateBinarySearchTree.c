/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int arr[10001];
 int i=0;
 void inorder(struct TreeNode *root)
 {
    if(root==NULL) return;
    inorder(root->left) ;
    arr[i++]=root->val;
    inorder(root->right);
 }
bool isValidBST(struct TreeNode* root){
    i=0;
    inorder(root);
    for(int j=0;j<i-1;j++)
    {
        if(arr[j]>=arr[j+1])
            return false;
    }
    return true;
}