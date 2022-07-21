#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 10000007
int main()
{
     int a,n;
     int res=1;
     cin>>a>>n;
     while(n)
     {
          if(n%2)
          {
          res*=a;
          n--;
          }
          else
          {
               a*=a;
               n/=2;
          }
     }
     cout<<res<<endl;
 return 0;
}