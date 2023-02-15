#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll k;
    cin >> k;
    ll ans = 1, c = 0, d = 7;
    while (ans <= k)
    {
        if (d % k == 0)
        {
            cout << ans << endl;
            c = 1;
            break;
        }
        d = (d * 10) + 7;
        d %= k;
        ans++;
    }
    if (c == 0)
        cout << "-1\n";
    return 0;
}