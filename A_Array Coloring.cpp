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
        ll n, sum = 0;
        cin >> n;
        ll arr[n + 1];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}