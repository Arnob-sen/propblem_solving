#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ll t, mx = 1000000000 + 7;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = 0, j = 1, c = 1;
        for (ll i = 1; i <= n; i++)
        {
            ans += (i * i);
            if (i == n)
                break;

            ans += (i * (i + 1));

            // c = 1;
        }
        cout << (ans * 2022) << endl;
    }
}