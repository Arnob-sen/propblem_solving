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
        string s1, s2;
        cin >> s1 >> s2;
        if (s1[0] == 'B' || s2[0] == 'B')
        {
            ll c = 1;
            if (s1[0] == 'B')
            {
                ll d = 1;
                for (ll i = 0; i <= n - 1; i++)
                {
                    if (d == 1 && s1[i] == 'B')
                    {
                        if (s2[i] == 'B')
                    }
                }
            }
        }
    }
}