#include <stdio.h>
#include <stdlib.h>
#define upper 100
#define lower 0
int count=0;
int n,m;  
int linear(int arr[],int value)
{
     for (int i = 0; i < n; i++)
     {
          if(arr[i]==value)
               return count;
          count++;
     }
}
int binary(int arr[],int value)
{
     int low=0,high=n-1;
     int mid;
     while(low<high)
     {
          count++;
          mid=(low+high)/2;
          if(arr[mid]==value)
               return count;
          if(arr[mid]<value)
               low=mid+1;
          else
               high=mid;
     }
     return -1;
}
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int main()
{
     n=8000;
     int arr[n];
     for (int i = 0; i < n; i++)
     {
          int r=(rand() % (upper - lower + 1)) + lower;
          arr[i]=r;
     }
     m=10000;
     count=0;
     int c=0;
     qsort(arr,n,sizeof(int),cmpfunc);
     for (int i = 0; i < m; i++)
     {
          count=0;
          int r=(rand() % (upper - lower + 1)) + lower;
          c+=binary(arr,r);
     }
     printf("%d\n",count);
}