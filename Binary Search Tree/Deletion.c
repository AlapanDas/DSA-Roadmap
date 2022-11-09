#include<stdio.h>
#include<stdlib.h>

struct node
{
     int data;
     struct node* left;
     struct node* right;
};
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

int minvalue(struct node* ptr)
{
     int minv=ptr->data;
     while(ptr->left)
     {
          minv=ptr->left->data;
          ptr=ptr->left;          
     }    
     return minv;
}

struct node*  delete(struct node* ptr,int x)
{
     if(ptr==NULL) printf("Not Found");
     if(ptr->data>x)
          return delete(ptr->left,x);
     else if(ptr->data<x)    
          return delete(ptr->right,x);
     else
     {
          if(ptr->right==NULL)
               return ptr->left;
          else if(ptr->left == NULL)
               return ptr->right;
          ptr->data=minvalue(ptr->right);
          ptr->right=delete(ptr->right,ptr->data);
     }
     return ptr;     
}

int main()
{
     printf("Enter Head Node");
     struct node* headnode=createnode();
     printf("Enter Element to be deleted");
     int data;
     scanf("%d",&data);  
     delete(headnode,data);
     inorder(headnode);
}