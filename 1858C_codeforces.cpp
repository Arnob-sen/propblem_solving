#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        vector<ll> v;

        ll n;
        cin >> n;

        for (ll i = 1; i <= n; i += 2)
        {
            for (ll j = i; j <= n; j *= 2)
                v.push_back(j);
        }
        for (auto x : v)
            cout << x << " ";

        cout << "\n";
    }
}