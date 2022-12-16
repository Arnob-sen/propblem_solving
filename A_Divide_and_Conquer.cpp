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
        ll arr[n + 1], sum = 0, ans1 = 10000, ans = 100000, x = 0, y = 0, d;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum % 2 == 0)
            cout << 0 << endl;
        else
        {
            for (ll i = 0; i < n; i++)
            {
                ll x = arr[i];
                while ((x + arr[i]) % 2 == 0)
                {

                    x /= 2;
                    y++;

                    //  cout << x << "   " << y << " " << arr[i] << " " << ans << endl;
                }
                ans = min(y, ans);
                y = 0;
            }
            cout << ans << endl;
        }
    }
}