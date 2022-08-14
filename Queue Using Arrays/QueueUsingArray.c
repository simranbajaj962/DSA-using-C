#include <stdio.h>
#include <stdlib.h>
#define N 5
int queue[N], val, i;
int front = -1;
int end = -1;

void enqueue()
{
    printf("\nEnter the value to insert: ");
    scanf("%d", &val);
    if (end == N - 1)
    {
        printf("\nOverflow!!!");
    }
    else if (front == -1 && end == -1)
    {
        front = end = 0;
        queue[front] = val;
    }
    else
    {
        end++;
        queue[end] = val;
    }
}

void dequeue()
{
    if (front == -1 && end == -1)
    {
        printf("\nUnderflow!!!");
    }
    else if (front == end)
    {
        front = end = -1;
    }
    else
    {
        printf("\n%d", queue[front]);
        front++;
    }
}

void display()
{
    if (front == -1 && end == -1)
    {
        printf("\nNo elements to dispay!");
    }
    else
    {
        for (i = front; i <= end; i++)
        {
            printf("\n%d", queue[i]);
        }
    }
}

void peek()
{
    if (front == -1 && end == -1)
    {
        printf("\nNo elements to dispay!");
    }
    else
    {
        printf("\n%d", queue[front]);
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