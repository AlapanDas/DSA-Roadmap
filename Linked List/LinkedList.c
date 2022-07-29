#include<stdio.h>
#include<stdlib.h>
struct node
{
     int data;
     struct node* next;
};
 
void insertatfront(struct node** head,int data )
{
     if(head==NULL)
          printf("Overflow");
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=(*head);
    *head= newnode;
}
void printlist(struct node *newnode)
{
  while (newnode != NULL)
  {
     printf("%d\n", newnode->data);
     newnode = newnode->next;
  }
}
int main()
{
     struct node* head=NULL;
     int n;
     scanf("%d",&n);
     for (int i = 0; i < n; i++)    
          insertatfront(&head,i);
     printlist(head);
}