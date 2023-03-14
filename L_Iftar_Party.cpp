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
        ll p, q;
        cin >> p >> q;
        ll ans = p - q;
        cout << "Case " << ++c << ": ";

        // if (ans < q)
        //     cout << "impossible\n";

        vector<ll> v;

        for (ll i = 1; i * i <= ans; i++)
        {
            if (ans % i == 0 && ans / i > q)
            {
                v.push_back(ans / i);
                if (ans / i != i && i > q)
                    v.push_back(i);
            }
        }
        if (v.size() == 0)
        {
            cout << "impossible\n";
            continue;
        }
        sort(v.begin(), v.end());
        for (ll i = 0; i < v.size(); i++)
            cout << v[i] << " ";

        cout << "\n";
    }
}
