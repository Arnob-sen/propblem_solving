#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 100000007;

int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        int n, x;
        cin >> n >> x;
        ll even = 0, odd = 0;
        for (ll i = 0; i < n; i++)
        {
            ll d;
            cin >> d;
            if (d % 2)
                odd++;
            else
                even++;
        }
        if (odd == 0)
        {
            cout << "No\n";
        }
        else if (even == 0 && x % 2 == 0)
            cout << "No\n";
        else
        {
            if (odd % 2 == 0) // odd number jodi even sonkok thake then oita jug korle even hy.tai ekta kom raika dkbo
                odd--;

            if (even + odd >= x && odd > 0)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
}