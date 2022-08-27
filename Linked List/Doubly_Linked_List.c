#include<stdio.h>
#include<stdlib.h>

struct node
{
     struct node* prev; 
     int data;
     struct node* next; 
};
struct node* head=NULL;
void insert_at_beg(int data)
{
     struct node* ptr=(struct node*)malloc(sizeof(struct node));     
     if(head==NULL)
     {
          ptr->prev=NULL;
          ptr->data=data;
          ptr->next=NULL;
          head=ptr;
     }
     else
     {
          ptr->prev=NULL;
          ptr->data=data;
          ptr->next=head;
          head->prev=ptr;
          head=ptr;
     }
}

void insert_at_end(int data)
{
     struct node* newnode=(struct node*)malloc(sizeof(struct node));     
     newnode->data=data;
     newnode->next=NULL;
     newnode->prev=NULL;
     struct node* ptr=head;
     while (ptr->next!=NULL)
     {
          ptr=ptr->next;
     }
     ptr->next=newnode;
     newnode->prev=ptr;
}
void display()
{
     struct node* ptr=(struct node*)malloc(sizeof(struct node));
     ptr=head;
     if(ptr==NULL)
          printf("Empty\n");
     else
          while(ptr!=NULL)
          {
               printf("%d\n",ptr->data);
               ptr=ptr->next;
          }
}

int main()
{while(1)
     {
        printf("\n1.Insert at Beginning\n");
        printf("2.Insert at End\n");
        printf("3.Display the List\n");
        printf("4.Exit\n");
        printf("Enter your choice  : ");
        int ch,data;
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            printf("enter data");
            scanf("%d", &data);
            insert_at_beg(data);
            break;
            case 2:
            printf("enter data");
            scanf("%d", &data);
            insert_at_end(data);
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            default:
            printf("Incorrect choice \n");
        } 
    }
}