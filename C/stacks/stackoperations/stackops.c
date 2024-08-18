#include<stdio.h>
#include<conio.h>
#define MAX 10
typedef struct stack
{
    int data[MAX];
    int top;
}stack;
void init(stack *s)
{
    s -> top = -1;
}
int empty(stack *s){
    if(s -> top==-1)
        return(1);
    return(0);
}
void push(stack *s, int x){
    s -> top = s -> top + 1;
    s -> data[s->top] = x;
}

int pop(stack *s)
{
    int x;
    x = s -> data[s->top];
    s -> top = s-> top-1;
    return(x);
}

void main(){
    int x;
    stack st1, st2;
    init(&st1);
    init(&st2);
    push(&st1, 10);
    push(&st1, 20);
    push(&st2, 100);
    push(&st2, 200);
    printf("\n Contents of the first stack:");
    while(!empty(&st1))
    {
        x = pop(&st1);
        printf("%d\t", x);
    }
    printf("\n Contents of the second stack:");
    while(!empty(&st2))
    {
        x = pop(&st2);
        printf("%d\t", x);
    }
}

