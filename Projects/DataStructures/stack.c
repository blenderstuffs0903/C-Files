#include <stdio.h>
#define MAX_SIZE 100

struct Stack
{
    int items[MAX_SIZE];
    int top;
};

void initialize(struct Stack *stack)
{
    stack->top = -1;
}

int is_empty(struct Stack *stack)
{
    return (stack->top == -1);
}

int is_full(struct Stack *stack)
{
    return stack->top == MAX_SIZE - 1;
}

void push(struct Stack *stack, int value)
{
    if (is_full(stack))
    {
        printf("Stack overflow\n");
    }
    else
    {
        stack->top++;
        stack->items[stack->top] = value;
        printf("%d pushed to the stack.\n", value);
    }
}

int pop(struct Stack *stack)
{
    if (is_empty(stack))
    {
        printf("Stack underflow.\n");
        return 0;
    }
    else
    {
        int popped_item = stack->items[stack->top];
        stack->top--;
        printf("%d is popped from the stack.\n", popped_item);
        return popped_item;
    }
}

void display_stack(struct Stack *stack)
{
    for (int i = 0; i <= stack->top; i++)
    {
        printf("%d ", stack->items[i]);
    }
}

int main()
{
    struct Stack my_stack;
    initialize(&my_stack);

    push(&my_stack, 10);
    push(&my_stack, 20);
    push(&my_stack, 30);

    display_stack(&my_stack);

    pop(&my_stack);

    display_stack(&my_stack);
    return 0;
}