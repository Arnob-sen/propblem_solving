#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 1e5 + 5;
vector<int> adjList[MAXN], ans, vis;
bool dfs(int x, int y)
{
    ans.push_back(x);
    if (vis[x])
        return 1;

    vis[x] = 1;
    for (int m : adjList[x])
    {
        if (m == y)
            continue;
        if (dfs(m, x))
            return 1;
    }
    ans.pop_back();
    return 0;
}
int main()
{
    ll n, m;
    cin >> n >> m;
    vis.resize(n + 1, 0);
    for (int i = 1; i <= m; i++)
    {
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    for (int i = 1; i <= n; i++)
    {
        if (vis[i])
            continue;
        if (dfs(i, -1))
            break;
    }
    if (ans.empty())
    {
        cout << "IMPOSSIBLE";
        // return 0;
    }
    else
    {
        while (ans.front() != ans.back())
            ans.erase(ans.begin());

        cout << ans.size() << "\n";
        for (int d : ans)
            cout << d << " ";
    }
    return 0;
}
