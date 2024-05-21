#include <bits/stdc++.h>
using namespace std;
#define upper 100
#define lower 0
#define n 5000
int cnt;
void swap(int *a, int *b)
{
     int temp = *a;
     *a = *b;
     *b = temp;
}
void merge_array(int array[], int const left, int const mid,int const right)
{
    auto const sAone = mid - left + 1;
    auto const sAtwo = right - mid;
    auto *leftArray = new int[sAone],
         *rightArray = new int[sAtwo];
    for (auto i = 0; i < sAone; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < sAtwo; j++)
        rightArray[j] = array[mid + 1 + j];
    auto indexone= 0,indextwo= 0;
    int indexOfMergedArray= left;
    while (indexone < sAone && indextwo < sAtwo) {
               cnt++;
        if (leftArray[indexone]<= rightArray[indextwo]) {
            array[indexOfMergedArray]= leftArray[indexone];
            indexone++;
        }
        else {
            array[indexOfMergedArray]= rightArray[indextwo];
            indextwo++;
        }
        indexOfMergedArray++;
    }
    while (indexone < sAone) {
        array[indexOfMergedArray]= leftArray[indexone];
        indexone++;
        indexOfMergedArray++;
    }
    while (indextwo < sAtwo) {
        array[indexOfMergedArray]= rightArray[indextwo];
        indextwo++;
        indexOfMergedArray++;
    }
    delete[] leftArray;
    delete[] rightArray;
}
int mergesort(int arr[],int low,int high)
{
     if(low>=high)
          return 0;
     auto mid=(low+high)/2;
     mergesort(arr,low,mid);
     mergesort(arr,mid+1,high);
     merge_array(arr,low,mid,high);
}
int quicksort(int arr[],int low,int high)
{
     if(low<high)
     {
          int p=partition(arr,low,high);
          quicksort(arr,low,p-1);
          quicksort(arr,p+1,high);
     }
}
int partition(int arr[],int low,int high)
{
     int pivot=arr[high];
     int i=low-1;
     for (int j = low; j < high-1; j++)
     {
          cnt++;
          if(arr[j]<pivot)    {
               i++;
               swap(&arr[i+1],&arr[high]);
          }
     }
     cnt+=cnt;
     return (i+1);
}

int main()
{

     int arr[n];
     // This Loop fills up the array with random numbers
     for (int i = 0; i < n; i++)
     {
          int r = (rand() % (upper - lower + 1)) + lower;
          arr[i] = r;
     }
     // Initialise the average number of comparision using this loop
     int avg_com=0;
     for (int i = 0; i < 100; i++)
     {
          mergesort(arr,0,n-1);
          avg_com+=abs(cnt);
          cnt=0;     
     }
     cout << avg_com/100 << endl;
}