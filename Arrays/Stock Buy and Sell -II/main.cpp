#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 10000007
int maxprofit(int arr[], int n)
{
     int profit=0;
     for (int i = 1; i < n; i++)
     {
          if(arr[i]>arr[i-1]) profit+=(arr[i]-arr[i-1]);
     }
     return profit;
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