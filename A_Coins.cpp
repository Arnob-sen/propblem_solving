#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll x = n - k;
        if (n % k == 0 || n % 2 == 0 || x % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
