#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 100000007;

int main()
{
    ll n;
    cin >> n;
    {
        ll dp[n + 2];
        dp[0] = 0;
        dp[1] = 2;
        for (ll i = 2; i <= n; i++)
            dp[i] = dp[i - 1] + dp[i - 2];

        cout << dp[n] << endl;
    }
}