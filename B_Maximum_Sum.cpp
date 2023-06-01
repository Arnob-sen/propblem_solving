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
    fastio
        ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n + 2];
        ll pref[n + 5];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);

        pref[0] = 0;
        for (ll i = 1; i <= n; i++)
            pref[i] = pref[i - 1] + arr[i - 1];
        // for (ll i = 0; i <= n; i++)
        // cout << pref[i] << " ";
        ll ans = 0;
        for (ll i = 0; i <= k; i++)
            ans = max(ans, pref[n - i] - pref[2 * (k - i)]);

        cout << ans << endl;
    }
}