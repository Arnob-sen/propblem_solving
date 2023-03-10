
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

const ll inf = -1e18;
const ld ep = 0.0000001;
const ld pi = acos(-1.0);
const ll md = 1000000007;

int vis[100005];
vector<ll> dis[100005];
vii adj[100005];

ll n, m, k;
void dijkstra()
{

    priority_queue<pii, vii, greater<pii>> pq;
    pq.push({0, 1});
    dis[1].pb(1);
    while (!pq.empty())
    {
        // if (vis[n])
        //     return;
        int u = pq.top().second;
        ll wt = pq.top().first;

        pq.pop();
        if (dis[u].size() > k)
            continue;
        dis[u].pb(wt);
        // if (vis[u])
        //     continue;
        // vis[u] = 1;
        //  ans.push_back(u);

        for (auto x : adj[u])
        {
            pq.push({wt + x.second, x.first});
            //     int v = x.first;
            //     ll w = x.second;

            //    // dis[v] = dis[u] + w;
            //     pq.push(make_pair(dis[v], v));
            //     parent[v] = u;
        }
    }
}
void printpath(ll n)
{
    if (parent[n] == -1)
    {
        cout << n;
        return;
    }
    printpath(parent[n]);
    cout << " " << n;
}
void solve()
{

    cin >> n >> m >> k;
    parent.assign(n + 1, -1);

    for (ll i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].pb({v, w});
        // adj[v].pb({u, w});
    }
    // for (int i = 2; i <= n; i++)
    //     dis[i] = inf;
    dijkstra();
    for (ll i = 0; i < k; i++)
        cout << dis[n][i] << " ";

    // cout << dis[n] << endl;
    //  if (dis[n] == inf)
    //      cout << "-1\n";
    //  else
    //  {
    //      vector<ll> ans;
    //      for (int i = n; i != -1; i = parent[i])
    //          ans.push_back(i);

    //     reverse(ans.begin(), ans.end());
    //     for (ll i = 0; i < ans.size(); i++)
    //         cout << ans[i] << " ";
    // }
    // for (int i = 0; i < parent.size(); i++)
    //   cout << parent[i] << " ";
    // cout << ans.size() << " ";
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