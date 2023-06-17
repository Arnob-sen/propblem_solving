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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n + 1];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        ll low = 0, high = arr[n - 1] - 1, ans, mid;
        while (low <= high)
        {
            mid = (low + high) / 2;
            ll c = 1, x = arr[0] + mid;
            for (ll i = 1; i < n; i++)
            {
                if (abs(arr[i] - x) > mid)
                {

                    c++;
                    x = arr[i] + mid;
                }
            }
            if (c <= 3)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        cout << ans << endl;
    }
}