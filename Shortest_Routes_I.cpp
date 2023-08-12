#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define F first
#define S second
#define ll long long
#define ull unsigned long long
#define ld long double
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pii>
#define vc vector

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
const ll inf = LLONG_MAX;
// const ld ep = 0.0000001;
// const ld pi = acos(-1.0);
// const ll md = 1000000007;

vii adj[100005];
int vis[100005], dis[100005];
void dij()
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pii>> pq;
    pq.push({0, 1});
    while (!pq.empty())
    {
        auto x = pq.top().second;
        pq.pop();
        if (vis[x])
        {
            continue;
        }
        vis[x] = true;
        for (auto [v, w] : adj[x])
        {
            if (dis[v] > dis[x] + w)
            {
                dis[v] = dis[x] + w;
                pq.push({dis[v], v});
            }
        }
    }
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].pb({v, w});
    }
    for (ll i = 2; i <= n; i++)
        dis[i] = inf;

    dij();
    for (ll i = 1; i <= n; i++)
        cout << dis[i] << " ";
}
signed main()
{
    IOS;
    solve();
}
