#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool used[2006];
vector<ll> liste[20005];
ll d[20005];
bool ok = 0;
void bfs(ll a)
{
    queue<ll> q;
    q.push(a);
    used[a] = true;
    while (!q.empty())
    {
        ll v = q.front();
        q.pop();
        for (ll u : liste[v])
        {
            if (used[u] == 0)
            {
                q.push(u);

                d[u] = d[v] + 1;
                used[u] = 1;
            }
            else if (u == a)
            { // oi node e fire asle
                d[u] = d[v] + 1;
                ok = true;
                return;
            }
        }
    }
}
int main()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            ll x;
            cin >> x;
            if (x)
                liste[i].push_back(j);
        }
    }
    for (ll i = 1; i <= n; i++)
    {

        bfs(i);

        if (ok && d[i] != 0)
            cout << d[i] << endl;
        else
            cout << "NO WAY\n";

        for (ll i = 0; i <= n; i++)
        {
            used[i] = 0;
            d[i] = 0;
        }
    }
}
