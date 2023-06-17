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
        ll n, k;
        cin >> n >> k;
        ll c = pow(2, k);
        ll ans = (log10(n) / log10(2));
        if (ans >= k)
            cout << c << endl;
        else
            cout << n + 1 << endl;
    }
}