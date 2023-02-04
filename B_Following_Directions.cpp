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
        ll a = 0, b = 0, c = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == 'U')
            {
                b++;
                if (a == 1 && b == 1)
                {
                    c = 1;
                    break;
                }
            }
            if (s[i] == 'D')
            {
                b--;

                if (a == 1 && b == 1)
                {
                    c = 1;
                    break;
                }
            }

            if (s[i] == 'R')
            {
                a++;
                if (a == 1 && b == 1)
                {
                    c = 1;
                    break;
                }
            }
            if (s[i] == 'L')
            {
                a--;

                if (a == 1 && b == 1)
                {
                    c = 1;
                    break;
                }
            }
        }
        if (c == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}