#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp(ll n)
{
    if (n >= 12)

        return dp(n / 2) + dp(n / 3) + dp(n / 4);
    else
        return n;
}
int main()
{
    ll n;

    while (cin >> n)
    {
        cout << dp(n) << endl;
    }
}