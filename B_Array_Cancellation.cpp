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
        ll n;
        cin >> n;
        ll arr[n + 1];
        for (ll i = 1; i <= n; i++)
            cin >> arr[i];

        ll x = INT_MAX, sum = 0;
        for (ll i = 1; i <= n; i++)

        {
            sum += arr[i];

            x = min(x, sum);
        }
        cout << -x << endl;
    }
}