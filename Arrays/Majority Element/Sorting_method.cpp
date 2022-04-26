#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int max = 0;
    int index = -1; 
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                cnt++;
        }
        if (cnt > max) {
            max = cnt;
            index = i;
        }
    }
    if (max > n / 2)
        cout << arr[index] << endl;
    else
        cout << "None" << endl;
}