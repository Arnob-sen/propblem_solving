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
        ll n;
        cin >> n;
        vector<vector<ll>> v(n + 1);
        for (ll i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            v[x].push_back(y);
        }

        for (ll i = 0; i < n; i++)
        {
            sort(v[i].rbegin(), v[i].rend());
                }
        ll sum = 0;
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 0; j < i && j < v[i].size(); j++)
            {
                sum += v[i][j];
            }
        }
        cout << sum << endl;
    }
}