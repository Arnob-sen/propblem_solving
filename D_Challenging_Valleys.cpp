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
        ll n;
        cin >> n;
        ll arr[n + 1];
        ll c = 0, f = 1;
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        for (ll i = 1; i < n; i++)
        {
            if (arr[i] > arr[i - 1])
                c = 1;
            if (c == 1 && arr[i] < arr[i - 1])
                f = 0;
        }
        if (f == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}