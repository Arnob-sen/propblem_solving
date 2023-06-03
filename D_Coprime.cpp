#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }
ll g[1020][1020];
// #define inf 1e12
int main()
{

    for (ll i = 1; i <= 1000; i++)
    {
        for (ll j = 1; j <= 1000; j++)
        {
            g[i][j] = 0;
            if (__gcd(i, j) == 1) // sob gula value r modde jara coprime save
            {
                g[i][j] = 1;
                g[j][i] = 1;
            }
        }
    }
    fastio
        ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n + 1), m(1010, 0);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            m[arr[i]] = max(m[arr[i]], i + 1); // koybar ase ekta element.er modde sbcheye boro index
        }
        ll ans = 0;
        for (ll i = 1; i <= 1000; i++)
        {
            for (ll j = 1; j <= 1000; j++)
            {
                if (g[i][j] == 1 && m[i] > 0 && m[j] > 0)
                    ans = max(ans, m[i] + m[j]); // coprime hoita hbe and ogula ekbr at least array te thkte hbe
            }
        }
        if (ans == 0)
            cout << "-1\n";
        else
            cout << ans << endl;
    }
}