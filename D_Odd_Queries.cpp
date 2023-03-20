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
        ll n, c = 0, q;
        cin >> n >> q;
        ll arr[n + 1];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        ll pre[n + 5];
        pre[0] = arr[0];
        for (ll i = 1; i < n; i++)
            pre[i] = pre[i - 1] + arr[i];

        ll all = pre[n - 1];
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll change = (r - l + 1) * k;
            ll tem = pre[r - 1] - (pre[l - 1] - arr[l - 1]);
            ll actual = all - tem + change;
            if (actual % 2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}