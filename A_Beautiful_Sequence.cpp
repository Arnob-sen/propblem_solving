#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, c = 0;
        cin >> n;
        ll arr[n + 2];
        for (ll i = 1; i <= n; i++)
            cin >> arr[i];
        for (ll i = 1; i <= n; i++)
        {
            ll cnt = 1;
            for (ll j = i; j <= n; j++)
            {
                if (arr[j] == cnt)
                {
                    c = 1;
                    break;
                }
                else
                    cnt++;
            }
        }
        if (c == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
