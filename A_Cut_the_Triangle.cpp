#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        //    unsigned long long d = pow(x1 - x2, 2) + pow(y1 - y2, 2);
        //    unsigned long long e = pow(x2 - x3, 2) + pow(y2 - y3, 2);
        //   unsigned long long f = pow(x3 - x1, 2) + pow(y3 - y1, 2);

        if ((x1 == x2 || x2 == x3 || x3 == x1) && (y1 == y2 || y2 == y3 || y3 == y1))
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}