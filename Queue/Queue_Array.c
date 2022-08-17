#include<stdio.h>
#include<stdlib.h>
#define size 1000
int front,rear;
int queue[size];
void enqueue(int data)
{
     if(rear==(size-1))
          printf("Overflow\n");
     else
     {
          if(front==-1)
               front=0;
          rear+=1;
          queue[rear]=data;
     }     
} 
// 1 2 3
// 0 1 2
void dequeue()
{
     if(front==-1 || front>rear)
          printf("Underflow\n");
     else
     {
          printf("%d\n",queue[front]);
          front+=1;
     }
}

void display()
{
     if(front==-1)
          printf("Empty\n");
     else
     {
          for (int i = front; i <=rear; i++)
          {
               printf("%d\n",queue[i]);
          }          
     }     
}

int main()
{
     front=-1,rear=-1;
     // display();
     // enqueue(10);1
     // dequeue();
     // enqueue(10);
     // enqueue(20);
     // display();
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