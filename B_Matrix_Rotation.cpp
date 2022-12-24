#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll arr[4], arr2[4];
        ;
        for (ll i = 0; i < 4; i++)
        {
            cin >> arr[i];
            arr2[i] = arr[i];
        }
        sort(arr, arr + 4);
        ll mx = arr[3];
        ll mn = arr[0];
        ll c, d;
        for (ll i = 0; i < 4; i++)
        {
            if (arr2[i] == mx)
                d = i;
            if (arr2[i] == mn)
                c = i;
        }
        if (c + d == 3)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}