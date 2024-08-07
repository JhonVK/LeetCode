/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void transform(struct TreeNode * root, struct TreeNode ** nodoAnterior, struct TreeNode ** primeiroNodo, struct TreeNode ** segundoNodo){
    if(root){
        transform(root->left, nodoAnterior, primeiroNodo, segundoNodo);

        if((*nodoAnterior != NULL) && (root->val <= (*nodoAnterior)->val)){

            if(*primeiroNodo == NULL){
                *primeiroNodo = *nodoAnterior;
                *segundoNodo = root;
            }else{
                *segundoNodo = root;
            }
        }

        *nodoAnterior = root;
        transform(root->right, nodoAnterior, primeiroNodo, segundoNodo);
    }
}

void recoverTree(struct TreeNode* root){

    struct TreeNode * primeiroNodo = NULL;
    struct TreeNode * segundoNodo = NULL;
    struct TreeNode * nodoAnterior = NULL;

    transform(root, &nodoAnterior, &primeiroNodo, &segundoNodo);

    int temp = primeiroNodo->val;
    primeiroNodo->val = segundoNodo->val;
    segundoNodo->val = temp;

    return;

    
}