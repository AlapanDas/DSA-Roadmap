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

void reverse()
{
     node *prev,*curr,*temp=new node();
     curr=head;
     prev=NULL;
     temp=NULL;
     while (curr!=NULL)
     {
          temp=curr->next;
          curr->next=prev;
          prev=curr;
          curr=temp;
     }
     head=prev->next;
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
//      insert_at_start(1);
//      insert_at_any(head,2);
//      insert_at_any(head->next,3);
//      insert_at_end(4);
//      delete_first();
//      display(head);
//      delete_last();
//      display(head);
     int ch,flag=-1,data,pos;
     while(1)
     {     
          cout<<"Enter 1 for Insertion at the beginning:"<<endl;
          cout<<"Enter 2 for Insertion at any position:"<<endl;
          cout<<"Enter 3 for Insertion at the end:"<<endl;
          cout<<"Enter 4 for deletion at the beginning:"<<endl;
          cout<<"Enter 5 for deletion at the any position:"<<endl;
          cout<<"Enter 6 for deletion at the end:"<<endl;
          cout<<"Enter 7 to display:"<<endl;
          cout<<"Enter 8 to exit:\n"<<endl;
          cin>>ch;
          switch (ch)
          {
          case 1:
               cout<<"Enter data"<<endl; cin>>data;
               insert_at_start(data);
               cout<<""<<endl;
               break;
          case 2:
               cout<<"Enter position and data"<<endl;                 
               cin>>pos>>data;
               try
               {
                    insert_any(pos,data);
               }
               catch(const std::exception& e)
               {
                    cout <<"Invalid Position" << '\n';
               }
               cout<<""<<endl;
               break;
          case 3:
               cout<<"Enter data"<<endl; cin>>data;
               insert_at_end(data);
               cout<<""<<endl;
               break;
          case 4:
               delete_first();
               cout<<""<<endl;
               break;
          case 5:
               cout<<"Enter position"<<endl;                 
               cin>>pos;
               try
               {
                    delete_at_any(pos);
               }
               catch(const std::exception& e)
               {
                    cout <<"Invalid Position" << '\n';
               }
               cout<<""<<endl;
          case 6:
               delete_last();
               cout<<""<<endl;
               break;
          case 7:
               cout<<endl;
               display(head);
               cout<<""<<endl;
               break;
          case 8:
               flag=0;
               cout<<""<<endl;
               break;
          }
          if(flag==0)
               break;
     }
}