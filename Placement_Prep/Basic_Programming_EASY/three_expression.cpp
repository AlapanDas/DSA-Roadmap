#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 10000007
int main()
{
     ll t;cin>>t;
     while(t--)
     {
              ll a,b,c;
              ll arr[3];
              cin>>arr[0]>>arr[1]>>arr[2];
              sort(arr,arr+3);
              if(arr[0]+arr[1]==arr[2])cout<<"yes"<<endl;
              else if(arr[0]+arr[2]==arr[1])cout<<"yes"<<endl;
              else if(arr[1]+arr[0]==arr[2])cout<<"yes"<<endl;
              else if(arr[1]+arr[2]==arr[0])cout<<"yes"<<endl;
              else if(arr[2]+arr[1]==arr[0])cout<<"yes"<<endl;
              else if(arr[2]+arr[0]==arr[1])cout<<"yes"<<endl;
              else cout<<"no"<<endl;
              
     }
 return 0;
}