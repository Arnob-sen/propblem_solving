#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }

int main()
{
    fastio
        ll t;
    cin >> t;
    while (t--)
    {
        ll n, c = 0, mx = 0;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;

            if (x % 2 == 0)
                c += x;
            else
                mx += x;
        }
        if (c > mx)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}