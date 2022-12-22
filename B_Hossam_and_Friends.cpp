#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll arr[n + 1] = {-1};
        ll ans = 0, point = 1;
        while (m--)
        {
            ll x, y;
            cin >> x >> y;
            if (x > y)
                swap(x, y);
            arr[y] = max(x, arr[y]);
        }
        for (ll i = 1; i <= n; i++)
        {
            point = max(point, arr[i] + 1);
            ans += (i - point + 1);
            // point=arr[i];
        }
        cout << ans << endl;
    }
}