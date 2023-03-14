#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 1e7 + 5;
#define endl '\n'
vector<bool> p(MAXN, false);
// vector<ll> dp;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }
ll ans1 = 0, ans2 = 0;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main()
{
    fastio
        ll n;
    vector<bool> prime(MAXN + 1, true);
    vector<ll> v;
    prime[2] = 1;
    for (ll i = 4; i <= MAXN; i += 2)
        prime[i] = false;

    for (ll i = 3; i * i <= MAXN; i += 2)
    {
        if (prime[i])
        {
            prime[i] = true;
            for (ll j = i * i; j <= MAXN; j += i + i)
                prime[j] = false;
        }
    }
    for (ll i = 2; i <= MAXN; i++)
        if (prime[i])
            v.push_back(i);

    // cout << v.size() << endl;
    ll t;
    cin >> t;
    ll c = 0;
    while (t--)
    {
        ll ans = 0;
        cin >> n;
        cout << "Case " << ++c << ": ";
        for (ll i = 0; v[i] <= n / 2; i++)
        {
            ll x = v[i];
            ll y = n - x;
            if (prime[x] && prime[y])
                ans++;
        }
        cout << ans << endl;
    }
}