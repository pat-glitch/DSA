#include<stdio.h>
#include<conio.h>
typedef struct stack
{
    char data[30];
    int top;
} stack;

void init(stack *p)
{
    p -> top = -1; 
}
void push(stack *p, char x)
{
    p -> top = p -> top + 1;
    p -> data [p -> top] = x;
}
char POP(stack *p)
{
    char x;
    x=p->data[p->top];
    p->top = p->top-1;
    return (x);
}

int empty(stack *p)
{
    if(p->top==-1)
        return(1);
        return(0);
}
void palindrome(char[]);
void main()
{
    stack s; 
    char text [20];
    int i;
    init(&s);
    printf("\n Enter a string:");
    gets(text);
    palindrome(text);
}
void palindrome(char text[])
{
    stack S;
    int i;
    init(&S);
    /* Stack is being used to reverse the sting. Original string and the reversed string are compare character by character*/
    for(i=0;text[i]!='\0';i++)
        push(&S, text[i]);
    for(i=0;text[i]!= '\0';i++)
        if(text[i]!=POP(&S))
            break;
        if(text[i]!='\0')
    /* A mismatch found befor end of the string */
        printf("\n Not a Palindrome");
        else
            printf("\n A Palindrome");
        getch();
}

