#include<bits/stdc++.h>
using namespace std;
int major(int arr[], int n)
{
     int ansindex=0,count=1;
     for (int i = 0; i < n; i++)
     {
          if(arr[i]==arr[ansindex])
               count++;
          else
               count--;
          if(count==0)
          {
               ansindex=i;
               count=1;
          }
     }
     return ansindex;
}
int main(){
     int n;cin>>n;
     int arr[n];
     for (int i = 0; i < n; i++)
     {
          cin>>arr[i];
     }
     cout<<arr[major(arr,n)]<<endl;
     
}