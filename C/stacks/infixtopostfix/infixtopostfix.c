#include <stdio.h>
#include <ctype.h> // For isalpha() function
#include <stdlib.h> // For exit() function
#include <string.h>

#define MAX 100

// Stack structure for operators
struct Stack {
    int top;
    char items[MAX];
};

// Initialize stack
void initStack(struct Stack* stack) {
    stack->top = -1;
}

// Push element to the stack
void push(struct Stack* stack, char ch) {
    if (stack->top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack->items[++(stack->top)] = ch;
}

// Pop element from the stack
char pop(struct Stack* stack) {
    if (stack->top == -1) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack->items[(stack->top)--];
}

// Peek the top element of the stack
char peek(struct Stack* stack) {
    if (stack->top == -1)
        return '\0';
    return stack->items[stack->top];
}

// Check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to check precedence of operators
int precedence(char op) {
    switch (op) {
        case '+':
        case '-': return 1;
        case '*':
        case '/':
        case '%': return 2;
        case '(': return 0;
    }
    return -1; // Invalid operator
}

// Function to convert infix to postfix
void infixToPostfix(const char* infix, char* postfix) {
    struct Stack stack;
    initStack(&stack);
    int j = 0; // Index for postfix

    for (int i = 0; infix[i] != '\0'; i++) {
        char ch = infix[i];

        // If the character is an operand (A-Z), add it to postfix
        if (isalpha(ch)) {
            postfix[j++] = ch;
        }
        // If the character is '(', push it to the stack
        else if (ch == '(') {
            push(&stack, ch);
        }
        // If the character is ')', pop until '(' is found
        else if (ch == ')') {
            while (!isEmpty(&stack) && peek(&stack) != '(') {
                postfix[j++] = pop(&stack);
            }
            pop(&stack); // Pop the '('
        }
        // If the character is an operator
        else {
            while (!isEmpty(&stack) && precedence(peek(&stack)) >= precedence(ch)) {
                postfix[j++] = pop(&stack);
            }
            push(&stack, ch);
        }
    }

    // Pop all remaining operators from the stack
    while (!isEmpty(&stack)) {
        postfix[j++] = pop(&stack);
    }

    postfix[j] = '\0'; // Null terminate the postfix expression
}

int main() {
    // Infix expressions
    const char* infix1 = "A-(B/C+(D%E*F)/G)*H";
    const char* infix2 = "A-(B/C+(D%E*F)/G)*H"; // Same as infix1 in this case

    char postfix1[MAX];
    char postfix2[MAX];

    // Convert to postfix
    infixToPostfix(infix1, postfix1);
    infixToPostfix(infix2, postfix2);

    // Output the results
    printf("Infix: %s\n", infix1);
    printf("Postfix: %s\n", postfix1);
    printf("\n");
    
    printf("Infix: %s\n", infix2);
    printf("Postfix: %s\n", postfix2);

    return 0;
}
