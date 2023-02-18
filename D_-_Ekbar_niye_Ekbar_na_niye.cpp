#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 100000007;

int main()
{
    ll n;
    cin >> n;
    ll arr[n + 1];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    ll dp[n + 1];
    for (ll i = 0; i < n; i++)
        dp[i] = 1;

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < i; j++)
        {
            if (arr[j] < arr[i])
                dp[i] = max(dp[i], dp[j] + 1);
        }
    }
    sort(dp, dp + n);

    cout << dp[n - 1] << endl;
}