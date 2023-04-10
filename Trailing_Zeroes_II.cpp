#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fact_calc(ll n, ll x)
{
    ll res = 0;
    while (n > 0)
    {
        res += n / x;
        n /= x;
    }
    return res;
}
ll num(ll n, ll x)
{
    ll res = 0;
    while (n % x == 0)
    {
        res++;
        n /= x;
    }
    return res;
}
int main()
{
    ll t, c = 0;
    cin >> t;
    while (t--)
    {
        ll n, r, p, q;
        cin >> n >> r >> p >> q;
        ll f_n1 = fact_calc(n, 2);
        ll f_n2 = fact_calc(n, 5);
        ll f_r1 = fact_calc(r, 2);
        ll f_r2 = fact_calc(r, 5);
        ll f_nr1 = fact_calc(n - r, 2);
        ll f_nr2 = fact_calc(n - r, 5);
        ll num1 = num(p, 2);
        ll num2 = num(p, 5);
        cout << "Case " << ++c << ": ";
        cout << min((f_n1 - f_r1 - f_nr1 + q * num1), (f_n2 - f_r2 - f_nr2 + q * num2)) << endl;
    }
}