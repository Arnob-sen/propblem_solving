#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 1000005;
vector<bool> p(MAXN, false);
vector<vector<ll>> d(MAXN);
ll arr[MAXN];
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
ll ans = 0, mx = INT_MAX;

void dfs(ll x)
{
    p[x] = true;
    mx = min(mx, arr[x]);

    //  cout << ans << " " << mx << endl;
    for (ll j : d[x])
    {
        if (!p[j])
        {

            dfs(j);
        }
    }
}
int main()
{
    fastio
        ll n,
        m;
    cin >> n >> m;
    // ll arr[n + 1];
    for (ll i = 1; i <= n; i++)
        cin >> arr[i];

    for (ll i = 1; i <= m; i++)
    {
        ll a, b;
        cin >> a >> b;
        d[a].push_back(b);
        d[b].push_back(a);
    }
    for (ll i = 1; i <= n; i++)
    {
        if (!p[i])
        {
            mx = INT_MAX;
            dfs(i);
            ans += mx;
            // mx = INT_MAX;
        }
    }
    cout << ans << endl;
}
