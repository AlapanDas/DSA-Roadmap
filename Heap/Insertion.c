#include <stdio.h>
#include <stdlib.h>
#define mod 998244353
#define size 10
int arr[size];

int swap(int **a, int **b)
{
     int key = *a;
     *a = *b;
     *b = key;
}

void heapify(int n, int i)
{
     if (n == 1)
          printf("Only One Element");
     else
     {
          int largest=i;
          int left = i * 2;
          int right = 2 * i+ 1;
          if(l<n && arr[l]>arr[n])
               largest=l;
          if(r<n && arr[r]>arr[n])
               largest=r;
          if(largest !=i)
          {
               swap(&arr[i],&ar[largest]);
               heapify(n,largest);
          }
          
     }
}
