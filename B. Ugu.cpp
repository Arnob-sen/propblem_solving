#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll ans = 0, c = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                c = 1;
                for (ll j = i; j < s.size() - 1; j++)
                {
                    //  cout << s[j] << " ";
                    if (s[j] != s[j + 1])
                        ans++;
                }
            }
            if (c == 1)
                break;
        }
        cout << ans << endl;
    }
}