#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ll t;
    cin >> t;
    while (t--)

    {
        ll n, d = 1;
        cin >> n;
        ll arr[n + 1];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            d *= arr[i];
        }
        d = d + (n - 1);
        cout << d * 2022 << endl;
    }
}