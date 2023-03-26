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
        ll n;
    cin >> n;
    ll arr[n + 1];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    ll sum = 0, mx = INT_MAX;
    for (ll i = 0; i < n; i++)
    {
        ll sum = arr[i] * 15;
        while (arr[i]--)
        {
            ll x;
            cin >> x;
            sum += (x * 5);
        }
        mx = min(sum, mx);
        sum = 0;
    }
    cout << mx << endl;
}
