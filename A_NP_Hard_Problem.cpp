// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define MAXN 1000000
vector<vector<ll>> v(MAXN);
ll ans[1000000] = {0};
queue<ll> q;
vector<ll> x, y;
vector<bool> vis(MAXN, false);
bool ok = 0;
void bfs(ll node)
{

    q.push(node);
    vis[node] = 1;
    ans[node] = 1;
    while (!q.empty())
    {
        ll z = q.front();
        q.pop();

        if (v[z].size() == 0)
        {
            ans[z] = 0;
            continue;
        }
        for (ll i : v[z])
        {
            if (ans[z] == ans[i])
            {
                ok = true;
                break;
            }
            if (!vis[i])
            {
                vis[i] = 1;
                if (ans[z] == 1)
                    ans[i] = 2;
                if (ans[z] == 2)
                    ans[i] = 1;

                q.push(i);
            }
        }
    }
}
int main()
{

    ll n, m;
    cin >> n >> m;
    for (ll i = 1; i <= m; i++)
    {
        ll a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for (ll i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
            bfs(i);
    }
    if (ok)
        cout << "-1\n";
    else
    {
        for (ll i = 1; i <= n; i++)
        {
            if (ans[i] == 1 && ans[i] != 0)
                x.push_back(i);
            else if (ans[i] == 2 && ans[i] != 0)
                y.push_back(i);
        }
        cout << x.size() << endl;
        for (ll i = 0; i < x.size(); i++)
            cout << x[i] << " ";
        cout << endl;
        cout << y.size() << endl;
        for (ll i = 0; i < y.size(); i++)
            cout << y[i] << " ";
        cout << endl;
    }
}