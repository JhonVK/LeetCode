#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *data;
    int top;
    int size;
} Stack;

void initStack(Stack *stack, int size) {
    stack->data = (char *)malloc(size * sizeof(char));
    stack->top = -1;
    stack->size = size;
}
void cleanupStack(Stack *stack) {
    free(stack->data);
    stack->data = NULL;
    stack->top = -1;
    stack->size = 0;
}
void push(Stack *stack, char value) {
    if (stack->top < stack->size - 1) {
        stack->top++;
        stack->data[stack->top] = value;
    }
}
void pop(Stack *stack) {
    if (stack->top >= 0) {
        stack->top--;
    }
}
int isEmpty(Stack *stack) {
    return stack->top == -1;
}

int maximumGain(char *s, int x, int y) {
    int score = 0;
    int len = strlen(s);
    Stack stack1, stack2;
    initStack(&stack1, len);
    initStack(&stack2, len);


    if (x > y) {
    for (int i = 0; i<len; i++) {
        if(!isEmpty(&stack1) && stack1.data[stack1.top] == 'a' && s[i] == 'b') {
            pop(&stack1);
            score += x;
        }else{
            push(&stack1, s[i]);
        }
    }
    while (!isEmpty(&stack1)) {
        char current = stack1.data[stack1.top];
        pop(&stack1);
        if (!isEmpty(&stack2) && stack2.data[stack2.top] == 'a' && current == 'b') {
            pop(&stack2);
            score += y; 
        }else{
            push(&stack2, current); 
        }
    }
}else if (y>x){
    for (int i = 0; i<len; i++) {
        if(!isEmpty(&stack1) && stack1.data[stack1.top] == 'b' && s[i] == 'a') {
            pop(&stack1);
            score += y;
        }else{
            push(&stack1, s[i]);
        }
    }
    while (!isEmpty(&stack1)) {
        char current = stack1.data[stack1.top];
        pop(&stack1); 
        if(!isEmpty(&stack2) && stack2.data[stack2.top] == 'b' && current == 'a') {
            pop(&stack2); 
            score += x; 
        }else{
            push(&stack2, current); 
    }
}
}
    cleanupStack(&stack1);
    cleanupStack(&stack2);

    return score;
}

int main() {
    char s[] ="sdadsadsadsadadadaabababbababbbaaa"; 
    int x = 6;
    int y = 321; 

    int result = maximumGain(s, x, y);
    printf("Pontuacao maxima: %d\n", result);
 
    return 0;
}
