#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 1000000;
vector<bool> p(MAXN, true);
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
        ll x = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '2')
                x++;
        }
        if (x == 1 || x == 2)
            cout << "NO\n";
        else
        {
            char arr[n + 2][n + 2];
            cout << "YES\n";
            for (ll i = 0; i < n; i++)
            {
                for (ll j = 0; j < n; j++)
                    if (i == j)
                    {
                        arr[i][j] = 'X';
                        continue;
                    }
            }
            for (ll i = 0; i < n; i++)
            {
                ll c = 0;
                for (ll j = i + 1; j < n; j++)
                {
                    if (s[i] == '1' || s[j] == '1')
                    {
                        arr[i][j] = '=';
                        arr[j][i] = '=';
                    }
                    // else if (i == j)
                    //     arr[i][j] = 'X';

                    else if (s[i] == '2' && c == 0)
                    {
                        arr[i][j] = '+';
                        arr[j][i] = '-';
                        c = 1;
                    }
                    else
                    {
                        arr[i][j] = '-';
                        arr[j][i] = '+';
                    }
                }
            }
            for (ll i = 0; i < n; i++)
            {
                for (ll j = 0; j < n; j++)
                    cout << arr[i][j];
                cout << endl;
            }
            // cout << endl;
        }
    }
}