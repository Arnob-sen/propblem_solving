#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }

int main()
{
    fastio
        ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n + 1];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        ll x = arr[n - 2];
        cout << min(x - 1, n - 2) << endl;
    }
}