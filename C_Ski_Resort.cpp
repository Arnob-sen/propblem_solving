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
        ll n, k, q;
        cin >> n >> k >> q;
        ll c = 0, ans = 0;
        ll arr[n + 1];
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x <= q)
                c++;
            else
                c = 0;

            if (c >= k)
                ans += c - k + 1;
        }

        cout << ans << endl;
    }
}