#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

void test(struct TreeNode* root){
    root->val=20;
}

int main(){
    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    if (root == NULL) {
        printf("Falha ao alocar memória.\n");
        return 1;
    }

    root->val = 10; // Inicializa com algum valor

    test(root);

    printf("%d\n", root->val); // Agora deve imprimir 20

    free(root); 
    return 0;
}
