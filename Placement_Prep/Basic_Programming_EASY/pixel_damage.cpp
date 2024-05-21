#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 10000007
int main()
{
     ll t;cin>>t;
     while(t--)
     {
          ll x,y,h,w,k;
          cin>>h>>w>>x>>y>>k;
          ll dist=sqrt((x-h)*(x-h)  +(y-w)*(y-w));
          // cout<<dist<<endl;
          if(dist<k)cout<<1<<endl;
          else cout<<0<<endl;
     }
 return 0;
}