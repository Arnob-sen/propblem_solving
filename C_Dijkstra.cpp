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
vector<ll> parent;

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
const ll inf = 1e18;
int vis[100005], dis[100005];
vii adj[100005];
int n, m;
void dij()
{
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pii>> pq;
    pq.push({0, 1});
    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        if (vis[u])
            continue;
        vis[u] = 1;
        //  ans.push_back(u);

        for (auto x : adj[u])
        {
            int v = x.first;
            ll w = x.second;

            if (dis[u] + w < dis[v])
            {
                dis[v] = dis[u] + w;
                pq.push({dis[v], v});
                parent[v] = u;
            }
        }
    }
}

signed main()
{

    cin >> n >> m;
    parent.assign(n + 1, -1);
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].pb({v, w});
        adj[v].push_back({u, w});
    }
    for (int i = 2; i <= n; i++)
        dis[i] = inf;
    dij();
    vector<ll> ans;
    for (ll i = n; i != -1; i = parent[i])
        ans.push_back(i);
    reverse(ans.begin(), ans.end());
    for (ll i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}