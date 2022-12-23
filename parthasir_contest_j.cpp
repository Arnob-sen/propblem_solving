#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    ll i = 1;
    while (t--)
    {
        ll n, k, p;
        cin >> n >> k >> p;
        cout << "Case " << i << ": ";
        if (k + p > n)
        {

            if ((k + p) % n == 0)
                cout << n << endl;

            else
                cout
                    << (k + p) % n
                    << endl;
        }
        else
            cout << k + p << endl;

        i++;
    }
}