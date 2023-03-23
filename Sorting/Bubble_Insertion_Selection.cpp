#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 10000007
#define upper 100
#define lower 0
void swap(int *a, int *b)
{
     int temp = *a;
     *a = *b;
     *b = temp;
}
int bubble(int arr[], int n)
{
     int i, j, temp, count;
     for (int i = 0; i < n - 1; i++)
     {
          for (int j = 0; j < n - i - 1; j++)
          {

               if (arr[j] > arr[j + 1])
               {
                    count++;
                    swap(&arr[j], &arr[j + 1]);
               }
          }
     }
     return count;
}
int selection_sort(int arr[], int n)
{
     int i, j, flag = 0, count = 0;
     for ( i = 0; i < n - 1; i++)
     {
          flag = i;
          for ( j = 0; j < n; j++)
          {
               if (arr[j] < arr[flag])
               {
                    // count++;
                    flag = j;
               }
          }
          if (flag != i)
               count++,swap(&arr[i], &arr[flag]);
     }
     return count;
}
int insertion_sort(int arr[],int n)
{
     int i,j,count=0;
     for (int i = 0; i < n-1; i++)
     {
          j=i;
          while (j>0 and arr[j-1]>arr[j])
          {
               count++;
               swap(&arr[j-1],&arr[j]);
               j-=1;
          }
     }
     return count;     
}
int main()
{
     // define size of the array here
     int n = 5000;
     int arr[n];
     // This Loop fills up the array with random numbers
     for (int i = 0; i < n; i++)
     {
          int r = (rand() % (upper - lower + 1)) + lower;
          arr[i] = r;
     }
     // Initialise the average number of comparision using this loop
     int avg_comparision = 0;
     for (int i = 0; i < 100; i++)
     {
          avg_comparision += selection_sort(arr, n);
     }
     avg_comparision /= 100;
     cout << avg_comparision << endl;
}