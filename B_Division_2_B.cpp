#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 10000;
const int maxn = 10000;
#define endl '\n'
vector<bool> p(MAXN, true);
// vector<ll> dp;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }
int main()
{
    ll t;
    cin >> t;
    ll ans = 0;
    for (ll i = 1; i <= t; i++)
    {
        ll a;
        cin >> a;
        if (a % 2 && i % 2)
            ans++;
    }
    cout << ans << endl;
}