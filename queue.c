#include <stdio.h>
#define MAXSIZE 10
int front = 0;
int rear = -1;
int queue[MAXSIZE];
void enqueue(int data)
{
         if (rear >= MAXSIZE - 1)
         {
                  printf("Queue is full");
         }
         else
         {
                  rear++;
                  queue[rear] = data;
         }
}
void dequeue()
{
         if (rear < front)
         {
                  printf("Queue is empty\n");
         }
         else
         {
                  int data = queue[front++];
                  printf(("%d\n", data));
         }
}

void display()
{
         for (int i = 0; i < MAXSIZE; i++)
         {
                  printf("%d ", queue[i]);
         }
}

int main()
{
         enqueue(10);
         enqueue(11);
         enqueue(12);

         dequeue();
         dequeue();

         return 0;