/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int max(int i, int j){
    if(j>i){
        return j;
    }else{
        return i;
    }
}
int maxSum(struct TreeNode* root, int *maxScore){
    
    if(root==NULL){return 0;}

    int left=max(0,maxSum(root->left, maxScore));
    int right=max(0,maxSum(root->right, maxScore));
    (*maxScore)=max((*maxScore),root->val+left+right);
    return (root->val+max(left,right));
}


int maxPathSum(struct TreeNode* root) {
    int *maxScore=malloc(sizeof(int)*1);
    maxSum(root, maxScore);
   return *maxScore;
}
