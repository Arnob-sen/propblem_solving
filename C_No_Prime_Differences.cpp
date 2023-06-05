#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }

// #define inf 1e12
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> v[n + 1];
        ll val = 1;
        for (ll i = 1; i <= n; i++)
        {
            v[i].resize(m + 1);
            for (ll j = 1; j <= m; j++)
                v[i][j] = val++;
        }
        for (ll i = 2; i <= n; i += 2)
        {
            for (ll j = 1; j <= m; j++)
                cout << v[i][j] << " ";

            cout << endl;
        }
        for (ll i = 1; i <= n; i += 2)
        {
            for (ll j = 1; j <= m; j++)
                cout << v[i][j] << " ";

            cout << endl;
        }
        cout << endl;
    }
}