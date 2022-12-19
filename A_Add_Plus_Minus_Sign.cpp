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
        ll c = 0;
        ll ans = 0;
        if (s[0] == '1')
            c++;

        for (ll i = 1; i < n; i++)
        {
            if (s[i] != '1')
                cout << "+";
            else
            {
                if (!c)
                {
                    cout << "+";
                    c++;
                }
                else
                {
                    cout << "-";
                    c--;
                }
            }
        }

        cout << endl;
    }
}