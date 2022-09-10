#include<stdio.h>
#include<stdlib.h>
#define endl printf("\n");

struct node
{
     int data;
     struct node* left;
     struct node* right;
};

struct node* createnode()
{
     int data;
     scanf("%d",&data);
     if(data==-1)
          return NULL;
     struct node* newnode = (struct node*)malloc(sizeof(struct node));
     newnode->data=data;
     printf("Enter Left Node Data for %d=",newnode->data);
     newnode->left=createnode();
     printf("Enter Right Node Data for %d=", newnode->data);
     newnode->right=createnode();
     return newnode;
}
void inorder(struct node* ptr)
{
     if(ptr==NULL)
          return;
     inorder(ptr->left);
     printf("%d",ptr->data);
     inorder(ptr->right);
}
void preorder(struct node* ptr)
{
     if(ptr==NULL)
          return;
     printf("%d",ptr->data);
     preorder(ptr->left);
     preorder(ptr->right);
}
void postorder(struct node* ptr)
{
     if(ptr==NULL)
          return;
     postorder(ptr->left);
     postorder(ptr->right);
     printf("%d",ptr->data);
}
int main()
{
     printf("Enter Root Node");
     struct node* headnode=createnode();
     inorder(headnode);
     endl   
     postorder(headnode);
     endl
     preorder(headnode);
     endl
     return 0;
}