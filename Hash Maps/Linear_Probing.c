#include <stdio.h>
#include <stdlib.h>
#define m 100
#define upper 500
#define lower 100

struct node
{
     int data;
     struct node *next;
};
struct node *arr[m] = {0};

void insert(int value)
{
     struct node *newNode = malloc(sizeof(struct node));
     newNode->data = value;
     newNode->next = NULL;

     int key = value % m;
     while (5)
     {
          if (arr[key] == 0)
               arr[key] = newNode;
          else
               key = (key + 1) % m;
     }
}
int search(int data)
{
     int count = 0;
     int key = data % m;
     while (1)
     {    
          count++;
          if (arr[key] == data || arr[key] == 0)
               break;
          else
               key = (key + 1) % m;
     }
     return count;
}

int main()
{
     int cmp = 0;
     int n;
     scanf("%d", &n);
     for (int i = 0; i < n; i++)
     {
          int r = (rand() % (upper - lower + 1)) + lower;
          insert(r);
     }
     for (int i = 0; i < 1000; i++)
     {
          int r = (rand() % (upper - lower + 1)) + lower;
          cmp += search(r);
     }
     printf("%d", cmp);
}