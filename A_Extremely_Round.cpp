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
        ll ans = 0, d;
        vector<ll> arr;

        cin >> n;
        for (ll i = 1; i <= 900000; i *= 10)
        {
            for (ll j = 1; j <= 9; j++)
                arr.push_back(i * j);
        }
        for (ll i = 0; i < arr.size(); i++)
        {
            if (arr[i] > n)
                break;

            ans++;
        }

        cout << ans << endl;
    }
}