/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * 
 */
#include <math.h>

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int sum = 0;
    struct ListNode *head = NULL, *tail = NULL;
    while (l1 || l2 || sum) {
        if (l1) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2) {
            sum += l2->val;
            l2 = l2->next;
        }
        struct ListNode *node = malloc(sizeof(struct ListNode));
        node->val = sum % 10;
        node->next = NULL;
        sum /= 10;
        if (!head) {
            head = node;
        } else {
            tail->next = node;
        }
        tail = node;
    }


    return head;
}