#include<bits/stdc++.h>
using namespace std;
int majority(int arr[],int n)
{
     unordered_map<int,int> hashmap;
     for(int i=0;i<n;i++) hashmap[arr[i]]++;
     int max=-1;
     for (auto i :hashmap)
     {
          if(i.second>n/2) return i.first;
     }
     return -1;
}
int main()
{
     int t; cin>>t;
     while(t--)
     {
          int n; cin >>n;
          int arr[n];
          for (int i = 0; i < n; i++)
          {
               cin>>arr[i];
          }
          cout<<majority(arr,n)<<endl;
     }
}