#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, c = 0, x = 0;
    cin >> n;
    string s;
    cin >> s;
    s[n] = '0';
    map<string, ll> m;
    if (n == 1)
    {
        cout << "NO\n";
        return;
    }

    for (ll i = 0; i < n; i++)
    {
        string a, b, c, d;
        a = s[i];
        b = s[i + 1];
        c = s[i + 2];
        d = s[i + 3];

        if (a == b && b == c && d != c)
        {

            continue;
        }

        m[a + b]++;
    }
    for (auto x : m)
        if (x.second > 1)
        {
            cout << "YES\n";
            c = 1;
            break;
        }
    if (c == 0)
        cout << "NO\n";

    // cout << endl;
}

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}