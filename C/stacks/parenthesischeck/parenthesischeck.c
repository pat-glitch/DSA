#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// Stack structure
struct Stack {
    int top;
    char arr[MAX];
};

// Initialize stack
void initStack(struct Stack* s) {
    s->top = -1;
}

// Check if stack is empty
int isEmpty(struct Stack* s) {
    return s->top == -1;
}

// Check if stack is full
int isFull(struct Stack* s) {
    return s->top == MAX - 1;
}

// Push an element to the stack
void push(struct Stack* s, char c) {
    if (isFull(s)) {
        printf("Stack overflow\n");
        return;
    }
    s->arr[++(s->top)] = c;
}

// Pop an element from the stack
char pop(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        return '\0';
    }
    return s->arr[(s->top)--];
}

// Function to check if two characters are matching brackets
int isMatchingPair(char left, char right) {
    return (left == '(' && right == ')');
}

// Function to check if parentheses are balanced
int areParenthesesBalanced(char* expr) {
    struct Stack s;
    initStack(&s);
    
    for (int i = 0; i < strlen(expr); i++) {
        // If opening parenthesis, push it to stack
        if (expr[i] == '(') {
            push(&s, expr[i]);
        }
        // If closing parenthesis, check for matching
        else if (expr[i] == ')') {
            if (isEmpty(&s) || !isMatchingPair(pop(&s), expr[i])) {
                return 0;  // Not balanced
            }
        }
    }
    
    // If stack is empty at the end, parentheses are balanced
    return isEmpty(&s);
}

int main() {
    char expr[MAX];
    
    printf("Enter an expression: ");
    scanf("%s", expr);
    
    if (areParenthesesBalanced(expr)) {
        printf("Parentheses are balanced.\n");
    } else {
        printf("Parentheses are not balanced.\n");
    }
    
    return 0;
}
