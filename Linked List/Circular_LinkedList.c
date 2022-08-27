#include <stdlib.h>
#include <stdio.h>

struct node
{
     struct node* prev;
     int data;
     struct node* next;
};
struct node* head=NULL;
void display()
{
     struct node* ptr=head;
     while(ptr->next!=NULL)
     {
          printf("%d",ptr->data);
          ptr=ptr->next;
     }
}
int main()
{
     head=(struct node*)malloc(sizeof(struct node));
     head->prev=NULL;
     head->data=25;
     struct node* ptr=(struct node*)malloc(sizeof(struct node));
     head->next=ptr->prev;
     ptr->data=3;
     ptr->next=NULL;
     display();
}
