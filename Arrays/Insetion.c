#include <stdio.h>
#include <stdlib.h>
#define size 10
int arr[size];
int p = -1;
void display()
{
     if (p == -1)
          printf("Empty!!\n");
     else
          for (int i = 0; i < p; i++)          
               printf("%d\n", arr[i]);          
}
void delete_at_kth(int k)
{
     int i;
     for (i = k; i < p; i++)
          arr[i] = arr[i + 1];
     arr[i] = arr[p--];
     if (p == 0)
          p= -1;
}
void delete_at_front()
{
     int i;
     for (i = 0; i < p; i++)
          arr[i] = arr[i + 1];
     arr[i] = arr[p--];
     if (p == 0)
          p = -1;
}
void delete_at_end()
{
     if (p != -1)
          arr[p--] = 0;
     if (p == 0)
          p = -1;
}
void insert_at_front(int value)
{
     if (p == (size - 1))
          printf("Size out of Bounds");
     else if (p == -1)
          arr[0] = value, p++;
     else
     {
          for (int i = 0; i < p; i++)
               arr[i + 1] = arr[i];
          arr[0] = value;
          p++;
     }
}
void append(int value)
{
     if (p == size)
          printf("Full");
     if (p == -1)
          p++;
     arr[p] = value;
     p++;
}
void insert_at_kth(int value, int k)
{
     for (int i = k; i < p; i++)
          arr[i + 1] = arr[i];
     p++;
     arr[k]=value;
}

int main()
{
     int flag = 0;
     while (flag == 0)
     {
          printf("\n1.Insert at front Operation\n");
          printf("2.Insert at end Operation\n");
          printf("3.Delete from end Operation\n");
          printf("4.Delete from front Operation\n");
          printf("5.Display the Queue\n");
          printf("6.Insert at kth Position\n");
          printf("7.Delete at kth Position\n");
          printf("8.Change at kth Position\n");
          printf("9.Display kth Position\n");
          printf("10.Exit\n");
          printf("Enter your choice  : ");
          int ch, data, pos;
          scanf("%d", &ch);
          switch (ch)
          {
          case 1:
               printf("Enter data");
               scanf("%d", &data);
               insert_at_front(data);
               break;
          case 2:
               printf("Enter data");
               scanf("%d", &data);
               append(data);
               break;
          case 3:
               delete_at_end();
               break;
          case 4:
               delete_at_front();
               break;
          case 5:
               display();
               break;
          case 6:
               printf("Enter data and position to be insert");
               scanf("%d %d", &data, &pos);
               insert_at_kth(data, pos);
          case 7:
               scanf(&pos);
               delete_at_kth(pos);
               break;
          case 8:
               scanf("%d", &pos);
               delete_at_kth(pos);
               break;
          case 9:
               scanf("%d", &pos);
               printf("%d", arr[pos]);
               break;
          case 10:
               printf("Enter data and position");
               scanf("%d %d", &data, &pos);
               arr[pos] = data;
               break;
          default:
               flag = 1;
               break;
          }
     }
}