#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n + 1];
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            for (ll j = 0; j < i; j++)
                if (arr[j] <= arr[i])
                    ans++;
        }
        cout << ans << "\n";
    }
}