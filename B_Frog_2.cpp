#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, k;

    cin >> n >> k;
    ll arr[n + 1], f[10000000];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        f[i] = 1e9;
    }
    f[1] = 0;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= k; j++)
        {
            f[i + j] = min(f[i + j], (f[i] + abs(arr[i + j] - arr[i])));
        }
    }
    cout << f[n] << endl;
}