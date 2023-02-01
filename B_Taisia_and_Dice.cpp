#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        //   cout << t << endl;
        ll n, s, r, sum = 0;
        cin >> n >> s >> r;

        cout << s - r << " ";
        ll d = r / (n - 1);
        ll x = n - 1;
        ll c = r % (n - 1);
        ll m = r;
        if (m % x == 0)
        {
            for (ll i = 0; i < n - 1; i++)
                cout << m / x << " ";

            cout << endl;
        }
        else
        {
            for (ll i = 0; i < n - 1; i++)
            {
                if (c > 0)
                {
                    cout << m / x + 1 << " ";
                    c--;
                }
                else
                    cout << m / x << " ";
            }
            cout << endl;
        }
    }
}