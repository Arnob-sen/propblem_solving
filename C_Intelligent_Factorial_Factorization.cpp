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
        ll c = 0,
           t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << "Case " << ++c << ": " << n << " = ";

        map<ll, ll> mp;
        ll m = n;
        for (ll i = 2; i <= n; i++)
        {
            ll x = i;
            for (ll j = 2; j * j <= i; j++)
            {

                if (x % j == 0)
                {
                    while (x % j == 0)
                    {
                        mp[j]++;
                        x /= j;
                    }
                }
            }
            if (x > 1)
                mp[x]++;
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it != mp.begin())
                cout << " * ";
            cout << it->first << " (" << it->second << ")";
        }
        cout << "\n";
    }
}