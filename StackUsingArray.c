#include <stdio.h>
#include <stdlib.h>

#define N 5
int stack[N];
int top = -1;
int i;

void push()
{
    int value;
    printf("\nEnter a value to push: ");
    scanf("%d", &value);

    if (top == N - 1)
    {
        printf("\nStack Overflow!!!");
    }
    else
    {
        top++;
        stack[top] = value;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack underflow!!!");
    }
    else
    {
        printf("\n%d", stack[top]);
        top--;
    }
}

void peek()
{
    printf("\n%d", stack[top]);
}

void display()
{
    for (i = top; i > -1; i--)
    {
        printf("\n%d", stack[i]);
    }
}

void main()
{
    int choice;

    do
    {
        printf("\nChoose from below options: \n1.Push \n2:Pop \n3:Peek \n4:Display \n5:Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch (choice)
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
        case 5:
            printf("\nExiting...");
            break;

        default:
            printf("\nInvalid choice!");
            break;
        }
    } while (choice != 0);
}