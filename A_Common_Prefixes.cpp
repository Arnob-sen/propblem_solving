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
        ll n;
        cin >> n;
        string s = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
        cout << s << endl;
        ll arr[n + 1];
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (s[x] == 'a')
                s[x] = 'b';
            else
                s[x] = 'a';
            cout << s << endl;
        }
    }
}