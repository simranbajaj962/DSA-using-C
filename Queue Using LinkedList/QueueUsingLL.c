#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = 0;
struct node *end = 0;

void enqueue()
{
    int val;
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the value to insert: ");
    scanf("%d", &val);
    newNode->data = val;
    newNode->next = NULL;
    if (front == 0 & end == 0)
    {
        front = end = newNode;
    }
    else
    {
        end->next = newNode;
        end = newNode;
    }
}

void display()
{
    struct node *temp;
    if (front == 0 & end == 0)
    {
        printf("\nQueue is Empty!!!");
    }
    else
    {
        temp = front;
        while (temp != 0)
        {
            printf("%d", temp->data);
            temp = temp->next;
        }
    }
}

void dequeue()
{
    struct node *temp;
    temp = front;
    if (front == 0 && end == 0)
    {
        printf("\nNo elements in queue.");
    }
    else
    {
        printf("%d", front->data);
        front = front->next;
        free(temp);
    }
}

void peek()
{
    if (front == 0 && end == 0)
    {
        printf("\nNo elements in queue.");
    }
    else
    {
        printf("%d", front->data);
    }
}

void main()
{
    int choice;

    do
    {
        printf("\nChoose from below options: \n1.Insert \n2:Delete \n3:Peek \n4:Display \n5:Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
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