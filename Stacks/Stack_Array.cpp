#include<bits/stdc++.h>
using namespace std;
int arr[1000];
int n=1000,top=1,element;
void push(int element)
{
     if(top>=n-1)
     cout<<"Overflow"<<endl;
     else{
          top++;
          arr[top]=element;          
     }
}
void pop()
{
     if(top<=-1)
     cout<<"Undeflow"<<endl;
     else
     {
          cout<<"Pooped Element is "<<arr[top]<<endl;
          top--;
     }
}
void display()
{
     if(top>=0)
     {
          for (int i=top; i>=0; i--)
          {
               cout<<arr[i]<<endl;
          }
     }
     else
     cout<<"Stack is Empty"<<endl;
}
void driver()
{
      int choice;
    cout<<"Press 1 for Insertion"<<endl;
    cout<<"Press 2 for Deletion"<<endl;
    cout<<"Press 3 to Display"<<endl;
    cout<<"Press 4 to Exit"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
          cin>>element;
          push(element);
          break;
     case 2:
          pop();
          break;
    default:
         break;
    }
}
int main()
{
//     while (true)
//     {
//          driver();
//     }
display();
    push(13);
    push(23);
    push(33);
    pop();
    display();
}