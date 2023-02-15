#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dx[] = {+1, -1, +0, -0};
ll dy[] = {+0, -0, +1, -1};
bool vis[25][25] = {0};
char str[25][25];
ll w, h, ans;
bool valid(ll x, ll y)
{
    if (x >= 0 && x < h && y >= 0 && y < w && str[x][y] != '#' && !vis[x][y])
        return true;
    return false;
}
void dfs(ll i, ll j)
{
    vis[i][j] = 1;
    ans++;
    for (ll z = 0; z < 4; z++)
    {
        ll x = i + dx[z];
        ll y = j + dy[z];
        if (valid(x, y))
            dfs(x, y);
    }
}

int main()
{
    ll t, m = 0;
    cin >> t;
    while (t--)
    {
        cin >> w >> h;
        for (ll i = 0; i < h; i++)
            cin >> str[i];
        memset(vis, 0, sizeof(vis));
        ans = 0;

        for (ll i = 0; i < h; i++)
        {
            for (ll j = 0; j < w; j++)
            {
                if (str[i][j] = '@')
                {
                    dfs(i, j);
                    break;
                }
            }
        }
        cout << "Case " << ++m << ": " << ans << endl;
    }
}