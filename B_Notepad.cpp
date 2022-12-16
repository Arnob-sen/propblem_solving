#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<pair<char, char>, ll> mp;
    pair<char, char> x = {s[0], s[1]};

    mp[x]++;

    ll c = 0;
    for (ll i = 2; i < n; i++)
    {
        pair<char, char> y = {s[i - 1], s[i]};
        if (mp[y] != 0)
        {
            if ((y == x && mp[y] > 1) || (y != x))
            {
                cout << "YES\n";
                return;

                c = 1;
                break;
            }
        }
        x = y;
        mp[y]++;
    }

    cout << "NO\n";
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