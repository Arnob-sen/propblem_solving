#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }
#define inf 1e12
int main()
{
    fastio
        ll n,
        m;
    cin >> n >> m;
    ll arr[n + 1];
    vector<ll> v;
    for (ll i = 1; i <= n; i++)
        cin >> arr[i];
    for (ll i = 1; i <= m; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    ll ans = 0;
    // lower bound jodi oita thake thn oitar index .otherwise tar samner ta
    // upper bound always samner ta
    v.push_back(inf);
    for (ll i = 1; i <= n; i++)
    {
        ll x = arr[i];
        ll low = *lower_bound(v.begin(), v.end(), x); // if x is not present it will give next greater element
        auto high = upper_bound(v.begin(), v.end(), x) - v.begin();

        if (high == 0)
            high = -inf;
        else
            high = v[high - 1];
        ans = max(ans, min(x - high, low - x));
    }
    cout << ans << endl;
}
