#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, m;
    cin >> n >> m;
    string s[4];
    ll mx = 0, mn = n + 1;
    while (m--)
    {
        for (ll i = 0; i < 4; i++)
            cin >> s[i];

        ll x;
        cin >> x;
        if (s[2] == "left")
            mn = min(mn, x);
        else if (s[2] == "right")
            mx = max(mx, x);
    }
    if (mn - mx <= 1)
        cout << "-1\n";
    else
        cout << mn - mx - 1 << endl;
}