#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 100000005;
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
        ll t,
        c = 0;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll arr[n + 1], pre[n + 1], suf[n + 1];
        pre[0] = 0, suf[n + 1] = 0;
        for (ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 1; i <= n; i++)
            pre[i] = gcd(arr[i], pre[i - 1]); // pura array r gcd store
        for (ll i = n; i >= 1; i--)
            suf[i] = gcd(arr[i], suf[i + 1]); // pura array r gcd store

        while (m--)
        {
            ll l, r;
            cin >> l >> r;

            cout << gcd(pre[l - 1], suf[r + 1]) << endl; // j range ta bad .ta bad dia baki gcd.karon suru thke ses o store abr ses thke suru o store kore rksi
        }
    }
}
