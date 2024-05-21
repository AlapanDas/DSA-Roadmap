#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 10000007
// #define read_array(arr,n) for(int i=0;i<n;i++) cin>>arr[i]>>endl;
bool is_prime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
         cin >> n;

         vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
             cin >> arr[i];
        }

         vector<int> non_primes;
        for (int x : arr)
        {
            if (!is_prime(x))
            {
                non_primes.push_back(x);
            }
        }
        for (int x : non_primes)
        {
             cout << x << " ";
        }
    }
    return 0;
}