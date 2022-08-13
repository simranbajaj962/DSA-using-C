#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top;

void push()
{
    int val;
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("\nEnter the value: ");
    scanf("%d", &val);
    newNode->data = val;
    newNode->next = top;
    top = newNode;
}

void display()
{
    struct Node *temp;
    temp = top;
    if (top == 0)
    {
        printf("\nStack is Empty!!!");
    }
    else
    {
        while (temp != 0)
        {
            printf("\n%d", temp->data);
            temp = temp->next;
        }
    }
}

void peek()
{
    if (top == 0)
    {
        printf("\nStack is Empty!!!");
    }
    else
    {
        printf("\nTop element is: %d", top->data);
    }
}

void pop()
{

    struct Node *temp;
    temp = top;
    if (top == 0)
    {
        printf("\nStack underflow!!!");
    }
    else
    {
        printf("\n%d", top->data);
        top = top->next;
        free(temp);
    }
}

void main()
{
    int choice;
    do
    {
        printf("\n Choose from below options: \n1.Push \n2:Pop \n3:Peek \n4:Display \n5:Exit");
        printf("\nEnter choice: ");
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
            printf("Exiting...");
            break;

        default:
            printf("\nPlease Enter a valid choice!");
            break;
        }
    } while (choice != 0);
}