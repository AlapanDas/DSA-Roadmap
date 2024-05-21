#include <bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     cin >> s;
     string a="";
     unordered_map<char,int> hash;
     for (int i = 0; i < s.size(); i++)
     {
          if (hash.find(s[i])==hash.end())
          {
               a.push_back(s[i]);
               hash[s[i]]++;
          }
          
     }
     cout<<a<<endl;
}