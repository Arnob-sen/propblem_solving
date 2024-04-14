
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 100000005;
vector<bool> p(MAXN, false);
ll modo = 1e9 + 7;
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
        ll n, m;
        string s;
        cin >> s >> m;

        cout << "Case " << ++c << ": ";
        ll rem = 0;
        n = abs(m);

        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '-')
                continue;
            rem = rem * 10 + (s[i] - '0');
            rem %= n;
        }
        if (rem == 0)
            cout << "divisible\n";

        else
            cout << "not divisible\n";
    }
}