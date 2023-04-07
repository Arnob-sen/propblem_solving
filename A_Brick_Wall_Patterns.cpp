#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    while (cin >> n && n != 0)
    {
        ll dp[n + 6];
        dp[0] = 1;
        dp[1] = 1;
        for (ll i = 2; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        cout << dp[n] << endl;
    }
}