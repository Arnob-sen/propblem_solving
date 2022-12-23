#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    while (cin >> n)
    {
        if (n == 0)
            break;

        ll arr[n + 1];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (ll i = 0; i < n - 1; i++)
        {
            cout << arr[i] << " ";
        }

        cout << arr[n - 1] << "\n";
    }
}