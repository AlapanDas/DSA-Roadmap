#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{     
          ll n;cin>>n;
          ll arr[n];
          for (int i = 0; i < n; i++)
          {
               cin>>arr[i];
          }
          ll maxsum=0,sum;
          for (int i = 0; i < n; i++)
          {
               sum=0;
               for (int j = i; j < n; j++)
               {
                    sum+=arr[j];
                    if(sum>maxsum) maxsum=sum;
               }
          }
          cout<<maxsum<<endl;  
     
}