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
        ll n,
        m = 0;
    while (cin >> n && n != 0)
    {

        cout << "Case " << ++m << ": ";

        ll ans = (8 * n) + 9;
        ll x = sqrt(ans);

        if (x * x == ans)
            cout << (x + 3) / 2 << endl;
        else
            cout << ((x + 3) / 2) + 1 << endl;
    }
}