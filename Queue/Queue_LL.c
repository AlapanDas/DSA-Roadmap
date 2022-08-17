#include <stdio.h>
#include <stdlib.h>
struct node
{
     int data;
     struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
void enqueue(int data)
{
     struct node *ptr = (struct node *)malloc(sizeof(struct node));
     ptr->data = data;
     ptr->next = NULL;
     if ((front == NULL) && (rear == NULL))
     {
          front = rear = ptr;
     }
     else
     {
          rear->next = ptr;
          rear = ptr;
     }
}

void dequeue()
{
     if (front == NULL)
     {
          printf("Underflow\n");
     }
     else
     {
          struct node *temp = front;
          int value = front->data;
          front = front->next;
          printf("%d\n", value);
          free(temp);
     }
}
     
void display()
{
     struct node *ptr;
     if (front == NULL && rear == NULL)
     {
          printf("Empty\n");
     }
     else
     {
          ptr = front;
          while (ptr)
          {
               printf("%d\n", ptr->data);
               ptr = ptr->next;
          }
     }
}

int main()
{
     while (101)
     {
          printf("\n1.Enqueue Operation\n");
          printf("2.Dequeue Operation\n");
          printf("3.Display the Queue\n");
          printf("4.Exit\n");
          printf("Enter your choice  : ");
          int ch, data;
          scanf("%d", &ch);
          switch (ch)
          {
          case 1:
               printf("enter data");
               scanf("%d", &data);
               enqueue(data);
               break;
          case 2:
               dequeue();
               break;
          case 3:
               display();
               break;
          case 4:
               exit(99);
          }
     }
}