#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, gcd = 0, ans = 0, d;
        cin >> n;
        ll arr[n + 2];
        for (ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
            gcd = __gcd(arr[i], gcd);
        }
        if (gcd == 1)
            cout << 0 << endl;
        else
        {
            gcd = 0;
            d = arr[n];
            arr[n] = __gcd(arr[n], n);

            for (ll i = n; i > 0; i--)
            {
                gcd = __gcd(arr[i], gcd);
                if (gcd == 1)
                {
                    ans = 1;
                    break;
                }
            }
            if (ans == 1)
                cout << "1\n";
            else
            {
                gcd = 0;
                arr[n - 1] = __gcd(n - 1, arr[n - 1]);
                arr[n] = d;

                for (ll i = n; i > 0; i--)
                {
                    gcd = __gcd(arr[i], gcd);
                    if (gcd == 1)
                    {
                        ans = 1;
                        break;
                    }
                }
                if (ans == 1)
                    cout << 2 << endl;
                else
                    cout << 3 << endl;
            }
        }
    }
}