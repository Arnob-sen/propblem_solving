#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> v;
    ll d;
    if (n % k == 0)
        d = n / k;
    else
        d = n / k + 1;
    ll x;
    for (ll i = 0; i < m; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.rbegin(), v.rend());

    if (d < v[0])
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}