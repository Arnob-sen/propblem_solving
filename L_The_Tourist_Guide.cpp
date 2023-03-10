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
ll adj[1005][1005] = {0};
void solve()
{
    ll n, m, c = 0;
    while (cin >> n >> m && n && m)
    {

        ll adj[105][105] = {0};
        for (ll i = 1; i <= m; i++)
        {
            ll u, v, w;
            cin >> u >> v >> w;
            adj[u][v] = adj[v][u] = max(adj[u][v], w);
        }
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                for (ll k = 1; k <= n; k++)
                {
                    adj[j][k] = max(adj[j][k], min(adj[j][i], adj[i][k]));
                }
            }
        }
        ll source, dest, q;
        cin >> source >> dest >> q;
        ll path = adj[source][dest] - 1;
        ll ans = q / path;
        cout << "Scenario #" << ++c << endl;
        cout << "Minimum Number of Trips = ";

        if (ans * path == q)
            cout << ans << endl;
        else
            cout << ans + 1 << "\n";

        cout << "\n";
    }
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