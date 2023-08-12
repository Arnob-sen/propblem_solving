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
const ll inf = 1e18;
int adj[1005][1005];
int vis[100005], dis[100005];
signed main()
{
    IOS;
    int n, m, q;
    cin >> n >> m >> q;
    for (int i = 1; i <= n; i++)

    {
        for (int j = 1; j <= n; j++)
        {
            adj[i][j] = inf;
        }

        adj[i][i] = 0;
    }
    for (int i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u][v] = adj[v][u] = min(adj[u][v], w);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                adj[j][k] = min(adj[j][k], adj[j][i] + adj[i][k]);
            }
        }
    }

    while (q--)
    {
        ll s, d;
        cin >> s >> d;
        if (adj[s][d] == inf)
            cout << "-1\n";
        else
            cout << adj[s][d] << endl;
    }
}
