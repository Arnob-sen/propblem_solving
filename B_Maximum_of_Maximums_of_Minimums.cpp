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
        ll n,
        k;
    cin >> n >> k;
    ll arr[n + 1];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    if (k == 1)
    {
        sort(arr, arr + n);
        cout << arr[0] << endl;
    }
    else if (k >= 3)
    {
        sort(arr, arr + n);
        cout << arr[n - 1] << endl;
    }
    else
    {
        cout << max(arr[0], arr[n - 1]) << endl;
    }
}