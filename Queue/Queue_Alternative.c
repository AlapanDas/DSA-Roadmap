//This Code is contributed by Aishika Roy
#include<stdio.h>
#include<stdlib.h>
#define N 50

int front = -1;
int rear= -1;
int arr[N];

void enqueue ()
{
  int value;
  if (rear == (N - 1))
    {
      printf ("OVERFLOW");
    }
  else
    {
      rear++;
      printf ("ENTER THE VALUE \n");
      scanf ("%d", &value);
      arr[rear] = value;
      printf ("VALUE IS INSERTED IN THE QUEUE \n");
    }
}

int dequeue ()
{
  int ITEM;
  if (front == rear)
    {
      printf ("EMPTY\n");
    }
  else
    {
      front++;
      ITEM = arr[front];
      front++;
      printf ("THE ITEM  %d IS DELETED \n", ITEM);
    }
}

void display ()
{
  int i;
  if (front == rear)
    {
      printf ("OVERFLOW\n");
    }

  else
    {
      printf ("\nprinting values .....\n");
      for (i = front; i <= rear; i++)
      {
        printf ("%d\n", arr[i]);
      }
    }
}


int main ()
{
  int choice;
  while (choice != 3)
    {
      printf
	("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
      printf ("ENTER THE CHOICE ");
      scanf ("%d", &choice);
      switch (choice)
	{
	case 1:
	  enqueue ();
	  break;
	case 2:
	  dequeue ();
	  break;
	  case 3:
	  display ();
	  break;
	case3:
	  exit (0);
	  break;
	default:
	  printf ("WRONG CHOICE ENTERED!!");
	}

    }


  return 0;
}