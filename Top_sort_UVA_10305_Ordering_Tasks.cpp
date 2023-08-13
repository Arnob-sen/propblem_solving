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
int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        vector<vector<int>> adj(n + 1);
        vector<int> indegree(n + 1);
        for (auto i = 1; i <= m; ++i)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            indegree[v]++;
        }
        queue<int> q;
        vector<int> v;

        for (int i = 1; i <= n; i++)
            if (indegree[i] == 0)
                q.push(i);
        while (!q.empty())
        {
            int x = q.front();
            q.pop();
            v.push_back(x);
            for (auto v : adj[x])
            {
                indegree[v]--;
                if (indegree[v] == 0)
                    q.push(v);
            }
        }
        for (auto i : v)
            cout << i << " ";

        cout << endl;
    }
}