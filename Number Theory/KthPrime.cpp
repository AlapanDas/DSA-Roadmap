#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
     vector<int> primes;
     bool arr[900001];
     arr[0]=arr[1]=1;
     for (int i = 2; i < 900001; i++)
     {
          if(!arr[i])
          {
               for (int j =i*i ; j <= 900001; j+=i)
               {
                    arr[j]=1; 
               }               
          }
     }
     for (int i = 0; i <=900001; i++)
     {
          if(!arr[i])
          primes.push_back(i);
     }
     int q;
     cin>>q;
     cout<<primes[q-1]<<endl;
 return 0;
}