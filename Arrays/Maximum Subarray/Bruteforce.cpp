#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
     ll t; 
     cin>>t;
     while(t--)
     {
          ll n;
          ll arr[n];
          for (int i = 0; i < n; i++) cin>>arr[i];
          ll maxx=0,sum;
          for (int i = 0; i < n; i++)
          {
               for (int j = 0; j < n; j++)
               {
                    sum=arr[j]+arr[i];
                    if(sum>maxx) 
                         maxx=sum;
               }          
          }
          cout<<sum<<endl;
     }
     return 0;
}