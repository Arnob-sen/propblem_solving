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
        m = 0;
    cin >> t;
    while (t--)
    {
        ll p, l;
        cin >> p >> l;
        cout << "Case " << ++m << ": ";
        ll ans = (p - l);
        if (ans < l)
        {
            cout << "impossible\n";
            continue;
        }
        vector<ll> v;

        for (ll i = 1; i * i <= ans; i++)
        {
            if (ans % i == 0)
            {
                if (i < l + 1 && ans / i < l + 1)
                {
                    continue;
                }
                else if (i < l + 1)
                    v.push_back(ans / i);
                else if (ans / i == i)
                    v.push_back(i);
                else
                {
                    v.push_back(i);
                    v.push_back(ans / i);
                }
            }
        }
        if (v.size() == 0)
        {
            cout << "impossible" << endl;
            continue;
        }
        sort(v.begin(), v.end());
        for (ll i : v)
            cout << i << " ";

        cout << endl;
    }
}