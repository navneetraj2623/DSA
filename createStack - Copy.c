#include <stdio.h>

int stack[10];

int top = -1;
void push()
{
    int x;
    printf("Enter the data:");
    scanf("%d", &x);
    if (top == 4)
    {
        printf("Overflow");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    int item;
    if (top == -1)
    {
        printf("Underflow");
    }
    else
    {
        item = stack[top];
        top--;
        printf("%d", item);
    }
}

void peek()
{
    if (top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("%d", stack[top]);
    }
}

void display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
}

int main()
{
    int ch;
    do
    {
        printf("enter 1:push 2:pop 3:peek 4:display\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            printf("Invalid choice");
        }
    }
    while (ch != 0);
    return 0;
}