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
const ld ep = 0.0000001;
const ld pi = acos(-1.0);
const ll md = 1000000007;

int vis[10005], dis[100005];
ll adj[1005][1005];

ll n, m, q;
// void dijkstra(ll start, ll end)
// {
//     priority_queue<pii, vii, greater<pii>> pq;
//     pq.push({0, start});
//     while (!pq.empty())
//     {
//         ll u = pq.top().second;
//         pq.pop();
//         if (vis[end])
//             return;
//         if (vis[u])
//             continue;
//         vis[u] = 1;
//         for (auto x : adj[u])
//         {
//             ll v = x.first;
//             ll w = x.second;
//             if (dis[u] + w < dis[v])
//             {
//                 dis[v] = dis[u] + w;
//                 pq.push({dis[v], v});
//             }
//         }
//     }
// }
void solve()
{

    cin >> n >> m >> q;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            adj[i][j] = inf;
        }
        adj[i][i] = 0;
    }

    for (ll i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u][v] = adj[v][u] = min(adj[u][v], w);
    }
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            for (ll k = 1; k <= n; k++)
            {
                adj[j][k] = min(adj[j][k], adj[j][i] + adj[i][k]);
            }
        }
    }

    while (q--)
    {
        ll source, dest;
        cin >> source >> dest;
        if (adj[source][dest] == inf)
            cout << "-1\n";
        else
            cout << adj[source][dest] << endl;

        // for (int i = 2; i <= n; i++)
        //     dis[i] = inf;
    }

    // cout << dis[n] << endl;
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