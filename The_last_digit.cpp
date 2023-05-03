#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll bigmod(ll a, ll b)

{
    if (b == 0)
        return 1;
    ll x = bigmod(a, b / 2);
    x *= x;
    if (b % 2)
        x *= a;
    return x % 10;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        n %= 10;
        ll ans = bigmod(n, m);
        cout << ans << endl;
    }
}