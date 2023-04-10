#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()

{

    ll t, c = 0;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll x = n;
        ll ans = 0;
        cout << "Case " << ++c << ": ";
        for (ll i = 2; i * i <= n; i++)
        {
            ll j = n / i;
            ans += (j + i) * (j - i + 1) / 2;
            // cout << ans << endl;
            ans += (j - i) * i;
            // cout << ans << endl;
        }
        cout << ans << endl;
    }
}