#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, d = 1, j = 1, c = 1, i, p;
        cin >> k >> n;
        ll m = k, x = n;
        vector<ll> v;
        while (k < n)
        {
            v.push_back(d);

            n -= d;
            k--;
            d++;
        }
        if (v.size() == 0)
        {
            for (ll i = 1; i <= k; i++)
                cout << i << " ";

            cout << endl;
        }
        else
        {
            //   cout << v.size() << endl;
            cout << c << " ";
            for (i = 0; i < v.size() && i < m - 1 && c + v[i] <= x; i++)

            {

                cout << v[i] + c << " ";
                c += v[i];

                //  cout << j + v[i] <<" ";
            }
            i++;
            //  cout << i << endl;
            // p = v[i] + c;
            //
            // cout << c << endl;

            if (i == m)
                cout << endl;

            else
            {
                // cout << y << endl;
                while (i <= m - 1)
                {
                    // cout << i << endl;
                    cout << c + j << " ";
                    j++;
                    i++;
                }
                cout << endl;
            }
        }
    }
}