**Stacks-Introduction**
Stack is a LIFO(Last In First Out) structure.

It is an ordered list of the same type of elements, it is also a linear list where all the insertions and deletions are permitted only at one end of the list.

When elements are added to the stack it grows at one end, and when elements are deleted from the stack it shrinks at the same end.


**Operations on Stacks**

1. Initalize()  : Make an stack empty.
2. Empty()      : To determine if a stack is empty or not.
3. Full()       : To determine if a stack if full or not.
4. Push()       : If a stack is not full then push a new element to the top of the stack.
5. POP()        : If a stack is not empty, then pop the element from it top (similar to deleted() from a list).
6. display_top(): Return the top element.

**Stack Representation**

Syntax of the stack:

typeof struct stack
{
    int data[MAX];
    int top;
}stack;
/*Max is a constant, max number of elemnts that can be stored*/
