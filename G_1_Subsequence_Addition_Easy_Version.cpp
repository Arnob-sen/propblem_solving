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
        ll n, c = 0;
        cin >> n;
        ll arr[n + 1];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);
        ll sum = 1;
        if (arr[0] != 1)
        {
            cout << "NO\n";
        }
        else
        {
            for (ll i = 1; i < n; i++)
            {
                if (sum >= arr[i])
                    sum += arr[i];

                else
                {
                    cout << "NO\n";
                    c = 1;
                    break;
                }
            }
            if (c == 0)
                cout << "YES\n";
        }
    }
}