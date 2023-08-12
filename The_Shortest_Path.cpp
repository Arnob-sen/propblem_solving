#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 100000005;
vector<bool> p(MAXN, false);
vector<pair<ll, ll>> adj[10000 + 6];
// vector<ll> dp;
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
ll n;
ll solve(ll source, ll dest)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;

    vector<ll> cost(n + 5, 1e9 + 5);
    cost[source] = 0;
    pq.push({0, source});
    while (!pq.empty())
    {
        auto node = pq.top();
        pq.pop();

        if (node.first > cost[node.second])
            continue;
        for (auto v : adj[node.second])
        {
            ll d = v.second + node.first;
            if (d < cost[v.first])
            {
                cost[v.first] = d;
                pq.push({d, v.first});
            }
        }
    }
    return cost[dest];
}
int main()
{
    fastio
        ll t;
    cin >> t;
    while (t--)
    {

        map<string, ll> mp;

        cin >> n;
        for (ll i = 1; i <= n; i++)
        {
            adj[i].clear();
            string s;
            cin >> s;
            mp[s] = i;
            ll x;
            cin >> x;
            for (ll j = 1; j <= x; j++)
            {
                ll u, w;
                cin >> u >> w;
                adj[i].push_back({u, w});
            }
        }
        ll m;
        cin >> m;
        for (ll i = 0; i < m; i++)
        {
            string x, y;
            cin >> x >> y;
            cout << solve(mp[x], mp[y]) << endl;
        }
    }
}