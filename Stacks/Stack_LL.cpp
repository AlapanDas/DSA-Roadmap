#include<bits/stdc++.h>
using namespace std;
struct node
{
     public:
     int data;
     struct node* next;
};

node* top=NULL;

void display()
{
     if(top==NULL)
          cout<<"Empty Stack\n";
     else
     {
          node* temp=top;
          while(temp!=NULL)
          {
               cout<<temp->data<<endl;
               temp=temp->next;
          }
     }
}

void push(int data)
{
     node* newnode=new node();
     if(!newnode)
          cout<<"Stack Overflow"<<endl;
     else
     {
          // if(top==NULL)
               
                    newnode->data=data;
                    newnode->next=top;
                    top=newnode;   
     }
}

void pop()
{
     node* ptr;
     if(top==NULL)
     {
          cout<<"Stack Underflow\n";
     }
     else
     {
          ptr= top;
          top=top->next;
          delete ptr;
     }
     
}
int main()
{
     push(19);
     // display();
     push(10);
     push(17);
     push(16);
     display();
     cout<<endl;
     pop();
     display();
}