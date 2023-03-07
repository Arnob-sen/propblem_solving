
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
const ld ep = 0.0000001;
const ld pi = acos(-1.0);
const ll md = 1000000007;

int vis[100005], dis[100005];
vii adj[100005];
void dijkstra()
{

    priority_queue<pii, vii, greater<pii>> pq;
    pq.push({0, 1});
    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        if (vis[u])
            continue;
        vis[u] = 1;
        for (auto [v, w] : adj[u])
        {
            if (dis[v] > dis[u] + w)
            {
                dis[v] = dis[u] + w;
                pq.push({dis[v], v});
            }
        }
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    for (ll i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].pb({v, w});
    }
    for (int i = 2; i <= n; i++)
        dis[i] = inf;
    dijkstra();

    for (int i = 1; i <= n; i++)
        cout << dis[i] << " ";
}
signed main()
{
    IOS;

    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
        // cout<<'\n';
    }
}