#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 100000005;
vector<bool> p(MAXN, true);
vector<ll> prime;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }

int main()
{

    fastio
        ll a,
        b, c;
    cin >> a >> b >> c;
    ll x = min(a / 3, b / 2);
    x = min(x, c / 2);
    ll res = 0;
    ll ans = 0;
    ll aa = a - x * 3;
    ll bb = b - x * 2;
    ll cc = c - x * 2;
    // cout << a << b << x << res << endl;
    for (ll i = 0; i < 7; i++)
    {
        ans = 0;
        a = aa, b = bb, c = cc;
        for (ll j = i; j < i + 7; j++)
        {
            ll k = j % 7;
            if (k == 0 || k == 3 || k == 6)
            {
                if (a >= 1)
                {
                    ans++;
                    a--;
                }
                else
                    break;
            }
            else if (k == 1 || k == 5)
            {
                if (b >= 1)
                {
                    ans++;
                    b--;
                }
                else
                    break;
            }
            else
            {
                if (c >= 1)
                {
                    ans++;
                    c--;
                }
                else
                    break;
            }
        }
        res = max(ans, res);
    }
    res += 7 * x;
    cout << res << endl;
}