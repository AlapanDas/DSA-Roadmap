#include <stdio.h>
#include <stdlib.h>
#define upper 500
#define lower 100
#define m 100
struct node
{
     int data;
     struct node *next;
};
struct node *arr[m];

void insert(int value)
{
     struct node *newNode = malloc(sizeof(struct node));
     newNode->data = value;
     newNode->next = NULL;

     int key = value % m;
     if (arr[key] == NULL)
          arr[key] = newNode;
     else
     {
          struct node *temp = arr[key];
          while (temp->next)
          {
               temp = temp->next;
          }
          temp->next = newNode;
     }
}
void print()
{
     for (int i = 0; i < m; i++)
     {
          struct node *temp = arr[i];
          printf("chain[%d]-->", i);
          while (temp)
          {
               printf("%d -->", temp->data);
               temp = temp->next;
          }
          printf("NULL\n");
     }
}

int search(int data)
{
     int count = 0;
     struct node *temp = arr[data % m];
     while (temp)
     {
          count++;
          if (temp->data == data)
               break;
          temp = temp->next;
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
