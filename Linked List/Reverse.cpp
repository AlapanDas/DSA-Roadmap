#include<bits/stdc++.h>
using namespace std;
struct node
{
     public:
     int data;
     struct node* next;
};
node* head=NULL;
void delete_first()
{
     if(head==NULL)
          cout<<"Empty List"<<endl;
     else
     {
          node* ptr=head;
          head=head->next;
          delete ptr;
     }
}

void delete_last()
{
     node * ptr= head;
     if(ptr==NULL) cout<<"Empty List Nothing to Delete"<<endl;
     else
     {
          if(head->next==NULL)
          {
               node * last=head->next;
               head=NULL;               
               delete last;
          }
          else
          {
               while(ptr->next!=NULL)
                    ptr=ptr->next;
               node * last=ptr;
               ptr->next=NULL;
               delete last;
          }
     }
}

void display(node* ptr)
{
     if(ptr==NULL)cout<<"Empty list"<<endl;
     while (ptr!=NULL)
     {
          cout<<ptr->data<<endl;
          ptr=ptr->next;
     }     
}

void insert_at_start(int data)
{
     node* newnode=new node();
     if(newnode==NULL)
          cout<<"Memory Allocation Error"<<endl;
     else
     {              
               newnode->data=data;
               newnode->next=head;
               head=newnode;          
     }
}

void insert_at_any(node* prev,int data)
{
     if(prev==NULL)
          cout<<"NULL Pointer";
     node* newnode= new node();
     newnode->data=data;
     newnode->next=prev->next;
     prev->next=newnode;
     
}

void insert_any(int count,int data)
{
     node* ptr=new node();
     node* ptr1=head;
     int c=0;
     ptr->data=data;
     while(c!=count)
     {
          ptr1=ptr1->next;
          c++;
     }
     ptr->next=ptr1->next;
     ptr1->next=ptr;
}

void insert_at_end(int data)
{
     node* ptr= new node();
     node* ptr1= head;
     if(ptr==NULL)
          cout<<"Memory Allocation Error"<<endl;
     else
     {
          if(head==NULL)
          {
               head=ptr;
               ptr->next=NULL;
               ptr->data=data;
          }
          else{
               while(ptr1->next!=NULL)          
                    ptr1=ptr1->next;               
               ptr1->data=data;
               ptr1->next=ptr;
          }
          
     }
}

void delete_at_any(int count)
{     
     node* ptr1=head;     
     if(ptr1==NULL)
     {
          cout<<"Empty List Nothing to delete"<<endl;
     }
     else{
          if(head->next==NULL)
          {
               node * last=head->next;
               head=NULL;               
               delete last;
          }
          else{
               int c=0;
               while(c!=count)
               {
                    ptr1=ptr1->next;
                    c++;
               }
               node* present_node=ptr1->next;
               ptr1->next=present_node->next;
               delete present_node;
          }
     }
}

int main()
{
     insert_at_start(1);
     insert_at_any(head,2);
     insert_at_end(3);     
     insert_at_end(4);     
     insert_at_end(5);     
     // display(head);
     reverse();
     display(head);
}