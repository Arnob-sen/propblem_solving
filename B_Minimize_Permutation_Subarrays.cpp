#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }

// #define inf 1e12
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n + 5];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        ll ans1 = *max_element(arr, arr + n);

        //  cout << ans1 << endl;
        ll x, y, z;

        for (ll i = 0; i < n; i++)
        {
            if (arr[i] == 1)
                x = i + 1;
            if (arr[i] == 2)
                y = i + 1;
            if (arr[i] == ans1)
                z = i + 1;
        }
        if (x > z && y > z)
        {
            cout << z << " " << min(x, y) << endl;
        }
        else if (x < z && y < z)
            cout << z << " " << max(x, y) << endl;

        else
            cout << 1 << " " << 1 << endl;
    }
}