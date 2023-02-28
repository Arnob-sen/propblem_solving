#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 100000005;
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
        ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        ll m;

        cin >> n >> m;
        ll mx = 0, c = 0;
        // cout << "Between " << n << " and " << m << ", ";
        for (ll i = n; i <= m; i++)
        {
            ll ans = 0;
            for (ll j = 1; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    if (i / j == j)
                        ans++;
                    else
                        ans += 2;
                }
            }
            if (ans > mx)
            {
                mx = ans;
                c = i;
            }
            // ans = 2;
        }
        cout << "Between " << n << " and " << m << ", " << c << " has a maximum of " << mx << " divisors." << endl;
    }
}
