#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m = 0, x = 0;
        cin >> n;
        ll arr[n + 1], arr2[n + 1];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr2[i] = arr[i];
        }
        ll ans = arr[0];

        sort(arr + 1, arr + n);
        for (ll i = 1; i < n; i++)
        {
            if (ans < arr[i])
            {
                if ((arr[i] - ans) % 2 == 0)
                    ans += ((arr[i] - ans) / 2);
                else
                    ans += ((arr[i] - ans) / 2 + 1);
            }
        }
        cout << ans << endl;
    }
}