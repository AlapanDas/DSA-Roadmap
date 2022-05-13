#include <bits/stdc++.h>
using namespace std;
#define ll long long
int maxSubArrSum(ll a[], ll size)
{
    int cursum = INT_MIN, maxsum = 0;
    for (int i = 0; i < size; i++)
    {
        maxsum = maxsum + a[i];
        if (cursum < maxsum)
            cursum = maxsum;
 
        if (maxsum < 0)
            maxsum = 0;
    }
    return cursum;
}
int main(){
     ll n; cin>>n;
     while(n--)
     {
          ll N;cin>>N;
          ll arr[N];
          for (int i = 0; i < N; i++)
          {
               cin>>arr[i];
          }
         cout<<maxSubArrSum(arr,N)<<endl;
     }
     return 0;
}