#include <bits/stdc++.h>
using namespace std;
struct node
{
public:
     int data;
     struct node *next;
};

node *top = NULL;

void display()
{
     if (top == NULL)
          cout << "Empty Stack\n";
     else
     {
          node *temp = top;
          while (temp != NULL)
          {
               cout << temp->data << endl;
               temp = temp->next;
          }
     }
}

void push(int data)
{
     node *newnode = new node();
     if (!newnode)
          cout << "Stack Overflow" << endl;
     else
     {
          // if(top==NULL)

          newnode->data = data;
          newnode->next = top;
          top = newnode;
     }
}

void pop()
{
     node *ptr;
     if (top == NULL)
     {
          cout << "Stack Underflow\n";
     }
     else
     {
          ptr = top;
          top = top->next;
          delete ptr;
     }
}
int main()
{
#include <bits/stdc++.h>
     using namespace std;
#define n 1000
     int arr[n];
     int top = 1, element;

     void push(int element)
     {
          if (top >= n - 1)
               cout << "Overflow" << endl;
          else
          {
               top++;
               arr[top] = element;
          }
     }
     void pop()
     {
          if (top <= -1)
               cout << "Undeflow" << endl;
          else
          {
               cout << "Pooped Element is " << arr[top] << endl;
               top--;
          }
     }
     void display()
     {
          if (top >= 0)
          {
               for (int i = top; i >= 0; i--)
               {
                    cout << arr[i] << endl;
               }
          }
          else
               cout << "Stack is Empty" << endl;
     }

     int main()
     {
          int choice;
          cout << "Press 1 for Insertion" << endl;
          cout << "Press 2 for Deletion" << endl;
          cout << "Press 3 to Display" << endl;
          cout << "Press 4 to Exit" << endl;
          cin >> choice;
          switch (choice)
          {
          case 1:
               cin >> element;
               push(element);
               break;
          case 2:
               pop();
               break;
          default:
               break;
          }
     }
}