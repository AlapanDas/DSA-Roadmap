#include<stdio.h>
#include<stdlib.h>

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

void search(struct node* ptr, int x)
{
     if(ptr==NULL) printf("Not Found");
     if(ptr->data==x)
          printf("Found");
     else if(ptr->data>x)
          search(ptr->left,x);
     else
          search(ptr->right,x);
}

int main()
{
     printf("Enter Head Node");
     struct node* headnode=createnode();
     printf("Enter Element to be searched");
     int data;
     scanf("%d",&data);  
     search(headnode,data);
}