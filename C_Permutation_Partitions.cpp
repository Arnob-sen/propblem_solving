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
    fastio
        ll n,
        k;
    cin >> n >> k;
    ll ans = 0, part = 1;
    vector<ll> v;
    for (ll i = 1; i <= n; i++)
    {
        ll a;
        cin >> a;
        if (a >= n - k + 1)
        {
            ans += a;
            v.push_back(i);
        }
    }
    for (ll i = 1; i < v.size(); i++)
        part = (part * (v[i] - v[i - 1])) % 998244353;

    cout << ans << " " << part << endl;
}