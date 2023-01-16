#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, m = 0;
    while (cin >> n && n != EOF)
    {
        m++;
        if (m > 1)
            cout << endl;
        ll arr[n + 1][n + 1];
        ll r = 0, c = n / 2, d = 0;
        for (ll i = 1; i <= n * n; i++)
        {
            arr[r][c] = i;

            if (i % n == 0)
                r++;
            else
            {
                if (r == 0)
                    r = n - 1;
                else
                    r--;
                if (c == (n - 1))
                    c = 0;
                else
                    c++;
            }
        }

        cout << "n=" << n << ", ";
        cout << "sum=" << n * (n * n + 1) / 2 << endl;
        for (ll i = 0; i < n; i++)
        {
            {
                for (ll j = 0; j < n; j++)
                {

                    if (n * n < 10)
                        cout << " ";
                    else if (n * n < 100)
                    {
                        if (arr[i][j] < 10)
                            cout << "  ";
                        else
                            cout << " ";
                    }
                    else if (n * n > 100)
                    {
                        if (arr[i][j] < 10)
                            cout << "   ";
                        else if (arr[i][j] < 100)
                            cout << "  ";
                        else
                            cout << " ";
                    }

                    cout << arr[i][j];
                }
                cout << endl;
            }
        }
        // cout<< endl;
    }

    return 0;
}