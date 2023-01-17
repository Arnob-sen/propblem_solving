#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, c;
    cin >> n >> c;
    ll arr[n + 1];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    ll mx = 0;
    for (ll i = 0; i < n - 1; i++)
        mx = max(arr[i] - arr[i + 1] - c, mx);
    cout << mx << endl;
}