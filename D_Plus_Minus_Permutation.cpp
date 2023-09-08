#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a, ll b)
{
    return ((a * b) / (__gcd(a, b)));
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, y, ans = 0, l = 1;
        cin >> n >> x >> y;
        ll m = n;

        ll c = (n / x) - (n / lcm(x, y));
        ll d = (n / y) - (n / lcm(x, y));
        ll ans1 = (n * (n + 1) / 2) - (((n - c) * (n - c + 1)) / 2);
        ll ans2 = (d * (d + 1) / 2);

        cout << ans1 - ans2 << endl;
    }
}