#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 10000007
int rainwater(int arr[],int n)
{
     int left[n];
     int right[n];
     left[0]=arr[0];
     for (int i = 1; i < n; i++)
     {
          left[i]=max(left[i-1],arr[i]);
     }
     right[n-1]=arr[n-1];
     for (int i = n-2; i >=0; i--)
     {
          right[i]=max(arr[i],right[i-1]);
     }
     int ans=0;
     for (int i = 0; i < n; i++)
     {
          ans+=min(left[i],right[i])-arr[i];
     }
     return ans;
}
int main()
{
     ll n;cin>>n;
     int arr[n];
     for (int i = 0; i < n; i++)
     {
          cin>>arr[i];
     }
     cout<<rainwater(arr,n)<<endl;
 return 0;
}