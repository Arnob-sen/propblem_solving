#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define MAXN 1000000
vector<vector<ll>> v(MAXN);
ll ans[1000000] = {0};
queue<ll> q;
vector<ll> x, y;
vector<bool> vis(MAXN, false);
bool ok = 0;
ll n, m, k, e, vx = 0, vs = 0, s = 0;

ll z;
void dfs(ll source)
{
    if (vis[source])
        return;
    z++;
    vis[source] = 1;
    for (auto i : v[source])
        dfs(i);
}
int main()
{

    cin >> n >> m >> k;
    for (ll i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
    }
    for (ll i = 0; i < m; i++)
    {
        ll a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for (ll i = 1; i <= n; i++)
    {
        z = 0;
        dfs(i);
        vx = max(vx, z);
        vs += z;
        s += z * (z - 1) / 2;
    }
    n = n - vs + vx;

    cout << s - vx * (vx - 1) / 2 + n * (n - 1) / 2 - m;
}