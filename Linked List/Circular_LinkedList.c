#include <stdlib.h>
#include <stdio.h>

struct node
{
     int data;
     struct node* next;
};
struct node* tail=NULL;
 
void insert(int data)
{
     struct node* ptr=(struct node*)malloc(sizeof(struct node));
     if(tail==NULL)
     {          
          ptr->data=data;
          tail=ptr;
          tail->next=ptr; 
     }
     else
     {
          ptr->data=data;
          ptr->next=tail->next;
          
     }
}
void display()
{
     struct node* ptr=tail;
     if (tail==NULL)
     {
          printf("Empty\n");
          exit(1);
     }
     while(ptr!=NULL)
     {
          printf("%d",ptr->data);
          ptr=ptr->next;
     }
}
int main()
{
     display();
     insert(12);
     display();
}
