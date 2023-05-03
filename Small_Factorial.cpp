#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll factorial(ll num)
{
    ll res = 1;
    for (ll i = 1; i <= num; i++)
        res *= i;

    return res;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << factorial(n) << endl;
    }
    return 0;
}