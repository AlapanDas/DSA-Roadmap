//----------HEADER----------
#include<bits/stdc++.h>
using namespace std;
//----------MACROS----------
typedef long long int  ll;
typedef long double lld;
typedef unsigned long long ull;
#define r(arr, len) for (int i = 0; i < len && cin >> arr[i]; i++)
#define p(arr,len) for(int i=0;i<len;i++) cout<<arr[i]<<" "; cout<<endl;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define fr(n) for(int i=0;i<n;i++)
#define F first
#define S second
#define pb push_back
#define vi vector<int>
#define vll vector<long long>
#define all(v) v.begin(),v.end()
#define cases ll T=0;cin>>T;while(T--)
const int size=1e7;
const ll mod=1000000007;
// bool check[size];
// ll a[size][2];
using namespace std;

int  main()
{
    int t;cin>>t;
    int x=0;
    while(t--)
     {
      int p,q;
      cin>>p>>q;
      (q-p>=2)?x++:x+=0;
     }
     cout<<x<<endl;
    return 0; 
}
 