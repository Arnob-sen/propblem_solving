#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    while (n--)
    {
        ll k;
        cin >> k;
        map<char, ll> mp;
        string s;

        while (k--)
        {
            char c;
            ll d;
            cin >> c >> d;
            mp[c] = d;
        }
        ll m;
        cin >> m;
        getchar();
        ll sum = 0;
        while (m--)
        {

            getline(cin, s);
            for (ll i = 0; i < s.size(); i++)
            {

                sum += mp[s[i]];
            }
        }
        ll ans = sum / 100;
        ll f = sum - (ans * 100);
        if (f / 10 == 0)
            cout << ans << ".0" << f << "$\n";
        else
            cout << ans << "." << f << "$\n";

        // cout << setprecision(2) << fixed << (sum / 100.0) << "$" << endl;
    }
}