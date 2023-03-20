#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, c, x_mid, y_mid, r, A;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        c = sqrt(a * a + b * b);
        x_mid = a / 2;
        y_mid = b / 2;
        double l = min(x_mid, y_mid);
        r = c / 2 - l;
        // cout << r << endl;
        //  r = (c / 2) - sqrt((c / 2) * (c / 2) - (a / 2) * (a / 2) - (b / 2) * (b / 2));
        A = 3.141592654 * (r * r);
        double ans = A / 2;
        cout << fixed << setprecision(9) << ans << "\n";
        return 0;
    }
}