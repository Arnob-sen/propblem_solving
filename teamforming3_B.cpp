#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, k, mx = 0;
    cin >> n >> k;
    ll arr[n + 1];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    ll i = 0;
    ll j = 0;
    while (i < n && j < n)
    {
        while (arr[j] - arr[i] < 1000)
            j++;

        if (j == n)
            break;
        mx = max(mx, j - i);
        i++;
    }
    mx = max(j - i, mx);
    if (mx % k == 0)
        cout << mx / k << endl;

    else
        cout << mx / k + 1 << endl;
}