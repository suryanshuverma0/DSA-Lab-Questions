#include <stdio.h>

#define MAXSIZE 10
int array[MAXSIZE];
int top = -1;

int isEmpty()
{
    if (top == -1)
    {
        return 1; 
    }
    return 0; 
}

int isFull()
{
    if (top == MAXSIZE - 1)
    {
        return 1;
    }
    return 0; 
}

void push(int data)
{
    if (isFull())
    {
        printf("Overflow\n");
    }
    else
    {
        top++;
        array[top] = data;
        printf("%d pushed to the array\n", data);
    }
}

void pop()
{
    if (isEmpty())
    {
        printf("Underflow\n");
    }
    else
    {
        printf("%d popped from the array\n", array[top]);
        top--;
    }
}

void display()
{
    if (isEmpty())
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int choice;
    int data;

    while (choice!=4)
    {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to push: ");
            scanf("%d", &data);
            push(data);
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Exiting program\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}
