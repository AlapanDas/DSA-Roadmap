#include <stdio.h>
#include <stdlib.h>
#define m 100
#define upper 200
#define lower 100

int arr[m] = {0};
int insert(int value)
{
     int index;
     int hash=value%m;
     for (int i = 0; i < m; i++)
     {
          index=(hash+i)%m;
          if (arr[index]==0)
          {
               arr[index]=value;
               break;
          }
     }
}
int search(int value)
{
     int index;
     int i=0,count=0;
     int hash=value%m;
     for ( i = 0; i < m; i++)
     {
          count++;
          index=(hash+i)%m;
          if (arr[index]==value && arr[index]==0)
          {
               return count;
               break;
          }
     }
}


int main()
{
     int cmp = 0;
     int n;
     scanf("%d", &n);
     for (int i = 0; i < n; i++)
     {
          int r = (rand() % (upper - lower + 1)) + lower;
          insert(r);
     }
     for (int i = 0; i < 1000; i++)
     {
          int r = (rand() % (upper - lower + 1)) + lower;
          cmp += search(r);
     }
     printf("%d", cmp);
}