#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ll n;
    cin >> n;
    ll arr[n + 1];
    ll b[n + 1];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    for (ll i = 0; i < n; i++)
        cin >> b[i];

    ll ans = 0;
    vector<ll> c;
    for (ll i = 0; i < n; i++)
    {
        //  v[i] = arr[i] - b[i];
        c.push_back(arr[i] - b[i]);
    }
    sort(c.begin(), c.end());

    for (ll i = 0; i < c.size(); i++)
    {
        if (c[i] <= 0)
            continue;

        ll d = lower_bound(c.begin(), c.end(), -c[i] + 1) - c.begin();

        // cout << lower_bound(c.begin(), c.end(), -c[i] + 1) - c.begin() << endl;

        ans += i - d;
    }
    cout << ans << endl;
}
