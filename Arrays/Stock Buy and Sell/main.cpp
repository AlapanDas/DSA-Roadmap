#include<bits/stdc++.h>
using namespace std;
int maxprofit(int arr[],int n)
{
     int maxp=0;
     int minsofar=arr[0];
     for (int i = 0; i < n; i++)
     {
          minsofar=min(minsofar,arr[i]);
          int profit=arr[i]-minsofar;
          maxp=max(profit,maxp);
     }
     return maxp;
}
int main()
{
     int n;cin>>n;
     int arr[n];
     for (int i = 0; i < n; i++)
     {
          cin>>arr[i];
     }
     cout<<maxprofit(arr,n)<<endl;
}