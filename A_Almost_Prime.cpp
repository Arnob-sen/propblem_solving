#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, c = 0, d = 0;
    vector<ll> v;
    cin >> n;
    ll arr[3000] = {0};
    for (ll i = 3; i <= 3000; i += 2)
        arr[i] = 1;

    for (ll i = 3; i <= 3000; i += 2)
    {
        if (arr[i] == 1)
        {
            for (ll j = i * i; j <= 3000; j += i)
                arr[j] = 0;
        }
    }
    arr[2] = 1;
    arr[1] = arr[0] = 0;
    for (ll i = 0; i <= n; i++)
    {
        if (arr[i] == 1)
            v.push_back(i);
    }
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 0; j < v.size(); j++)
            if (i % v[j] == 0)
                c++;

        if (c == 2)
            d++;

        c = 0;
    }
    cout << d << endl;
}