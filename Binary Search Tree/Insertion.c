#include<stdio.h>
#include<stdlib.h>

struct node
{
     int data;
     struct node* left;
     struct node* right;
};
struct node* headnode;
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
struct node* create(int x)
{
     struct node* ptr=(struct node*)malloc(sizeof(struct node));
     ptr->data=x;
     ptr->left=ptr->right=NULL;     
}
struct node* insert(struct node* ptr,int x)
{
     if(ptr==NULL)
          return create(x);
     if(ptr->data>x)
          ptr->left=insert(ptr->left,x);
     else if(ptr->data<x)
          ptr->right=insert(ptr->right,x);
     return ptr;
}
int main()
{
     printf("Enter Head Node");
     headnode=createnode();
     printf("Enter Element to be inserted");
     int data;
     scanf("%d",&data);  
     insert(headnode,data);
     inorder(headnode);
}