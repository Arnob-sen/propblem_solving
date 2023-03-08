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
    ll a, b, c, ans = 0;
    cin >> a >> b >> c;
    for (ll i = b; i >= a; i--)
        if (i % c == 0)
            ans++;
    cout << ans << endl;
}