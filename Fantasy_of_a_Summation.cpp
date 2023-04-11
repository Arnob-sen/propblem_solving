#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 10000005;
vector<bool> p(MAXN, true);
vector<ll> prime;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }
ll mod;
ll bigmod(ll base, ll power)
{
    if (power == 0)
        return 1 % mod;
    ll x = bigmod(base, power / 2);
    x = (x * x) % mod;
    if (power % 2)
        x = (x * base) % mod;
    return x;
}

int main()
{

    fastio
        ll t,
        c = 0;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k >> mod;
        ll arr[n + 1], res = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            res += arr[i];
            res %= mod;
        }
        ll ans = bigmod(n, k - 1);
        cout << "Case " << ++c << ": ";

        cout << (ans % mod * res % mod * k % mod) % mod << endl;
    }
}