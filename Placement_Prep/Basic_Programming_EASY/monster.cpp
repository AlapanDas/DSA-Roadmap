/* Problem
A monster has H health points. Each time you hit it with a sword it loses 
X health points. However, the monster always gains 
Y health points right before every one of your hits.

The monster is considered defeated when the number of health points it has becomes zero or less than zero. You need to find if it is possible to defeat the monster.

**Input Format**
The first line of the input contains a single integer T - the number of test cases. The description of T test cases follows.

The first line of each test case contains three space-separated integers 
H, X and Y.

**Output Format**
For each test case, print a single line containing one integer. That integer should be 1 if it is possible to defeat the monster and 0 otherwise.*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 10000007
int main()
{
     ll t;cin>>t;
     while(t--)
     {
              int h,x,y;
              cin>>h>>x>>y;
              if(h+y-x<=0)cout<<1<<endl;
              else cout<<0<<endl;
     }
 return 0;
}