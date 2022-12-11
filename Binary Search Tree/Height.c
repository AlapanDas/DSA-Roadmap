#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define lower 1
#define upper 100

struct node
{
     int data;
     struct node *left;
     struct node *right;
};

struct node *headnode;
int rheight = 0, lheight = 0;
struct node *createnode()
{
     int data;
     scanf("%d", &data);
     if (data == -1)
          return NULL;
     struct node *newnode = (struct node *)malloc(sizeof(struct node));
     newnode->data = data;
     printf("Enter Left Node Data for %d=", newnode->data);
     newnode->left = createnode();
     printf("Enter Right Node Data for %d=", newnode->data);
     newnode->right = createnode();
     return newnode;
}

void inorder(struct node *ptr)
{
     if (ptr == NULL)
          return;
     inorder(ptr->left);
     printf("%d", ptr->data);
     inorder(ptr->right);
}

void preorder(struct node *ptr)
{
     if (ptr == NULL)
          return;
     printf("%d", ptr->data);
     preorder(ptr->left);
     preorder(ptr->right);
}

void postorder(struct node *ptr)
{
     if (ptr == NULL)
          return;
     postorder(ptr->left);
     postorder(ptr->right);
     printf("%d", ptr->data);
}

struct node *create(int x)
{
     struct node *ptr = (struct node *)malloc(sizeof(struct node));
     ptr->data = x;
     ptr->left = ptr->right = NULL;
}

struct node *insert(struct node *ptr, int x)
{
     if (ptr == NULL)
          return create(x);
     if (ptr->data > x)
          ptr->left = insert(ptr->left, x);
     else if (ptr->data < x)
          ptr->right = insert(ptr->right, x);
     return ptr;
}
int max(int a, int b)
{
     if (a > b)
          return a;
     else
          return b;
}
int height_tree(struct node *ptr)
{
     if (ptr == NULL)
          return 0;
     else
     {
          rheight = height_tree(ptr->left);
          lheight = height_tree(ptr->right);
          if (rheight > lheight)
               return (rheight + 1);
          else
               return (lheight + 1);
     }
}

int main()
{
     // printf("Enter Head Node");
     struct node *headnode = (struct node *)malloc(sizeof(struct node));
     headnode->data = rand();
     headnode->left = NULL;
     headnode->right = NULL;
     int heights[1000];
     for (int j = 0; j < 1000; j++)
     {
          for (int i = 0; i < 1000; i++)
          {
               int r = rand();
               insert(headnode, r);
          }
          heights[j] = height_tree(headnode);
     }
     int count=0;
     for (int i = 0; i < 1000; count++,i++)
     {
          if (heights[i]!=heights[i+1])
          {
               printf("%d %d\n",heights[i],count);
               count=0;
          }
          // printf("%d\n",heights[i]);
     }
}