#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, ans = 0;
        ll mx = 0, mn = INT_MIN;
        map<ll, ll> m;
        cin >> n;
        ll arr[n + 1];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            m[arr[i]]++;
        }
        map<ll, ll>::iterator itr1, itr2;
        sort(arr, arr + n);
        if (arr[n - 1] == arr[0])
            cout << n * (n - 1) << endl;
        else
        {
            itr1 = m.end();
            itr1--;
            itr2 = m.begin();
            cout << 2 * (itr1->second * itr2->second) << endl;
        }
    }
}