#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 10000007
int partition(vector<int> arr,int low,int high)
{
     int pivot=arr[high];
     int i=low-1;
     for (int j = low; j < high-1; j++)
     {
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
     vector<int> a={2,5,1,3};
     int p=partition(a.begin(),0,3);
     cout<<p<<endl;
}