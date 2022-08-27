#include<stdio.h>
#include<stdlib.h>
#define N 50
int front = -1;
int rear= -1;
int queue[N];

void enqueue(int data)
{
     if(front==-1 && rear==-1)
     {
          front=0;
          rear=0;
          queue[rear]=data;
     }
     else if((rear+1)%N==front)
     {
          printf("Overflow\n");
     }
     else
     {
          rear=(rear+1)%N;
          queue[rear]=data;
     }
}

void dequeue()
{
     if (front==-1 && rear==-1)
     {
          printf("Underflow\n");
     }
     else if(front==rear)
     {
          printf("%d",queue[front]);
          front=-1;
          rear=-1;
     }
     else
     {
          printf("%d",queue[front]);
          front=(front+1)%N;
     }
}

void display()
{
     int i;
     if(front==-1 && rear==-1)
          printf("Empty Queue\n");
     else
     {
          // printf("%d",queue[front]);
          for (i = front; i != rear; i = (i + 1) % N)
          {
               printf("%d",queue[i]);
          }
          printf("%d",queue[i]);

     }
}

int main()
{
     while(1)
     {
        printf("\n1.Enqueue Operation\n");
        printf("2.Dequeue Operation\n");
        printf("3.Display the Queue\n");
        printf("4.Exit\n");
        printf("Enter your choice  : ");
        int ch,data;
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
            exit(0);
            default:
            printf("Incorrect choice \n");
        } 
    }
}