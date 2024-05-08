/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {

    struct ListNode* noAtual=head;
    struct ListNode* temp;

    if (head == NULL || head->next == NULL) {
        return head;
    }
    
    while (noAtual != NULL && noAtual->next != NULL) {
        if (noAtual->val == noAtual->next->val) {
            temp = noAtual->next;
            noAtual->next = noAtual->next->next;
            free(temp); // Libera a memória do nó duplicado
        } else {
            noAtual = noAtual->next;
        }
    }
    return head;
}