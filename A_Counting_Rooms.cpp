#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAXN 1000
char adjList[1000][1000];
bool vis[1000][1000];

ll n, m;
bool check(ll i, ll j)
{
    if (i >= 0 && j >= 0 && i < n && j < m && !vis[i][j] && adjList[i][j] == '.')
        return 1;
    else
        return 0;
}
void recursion(ll i, ll j)
{
    if (check(i, j) == 0)
        return;
    vis[i][j] = 1;
    recursion(i + 1, j);
    recursion(i, j + 1);
    recursion(i - 1, j);
    recursion(i, j - 1);
}

int main()
{
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
            cin >> adjList[i][j];
    }
    memset(vis, 0, sizeof vis);
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (check(i, j))
                ans++;

            recursion(i, j);
        }
    }
    cout << ans;
}