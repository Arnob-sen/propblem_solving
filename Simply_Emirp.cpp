#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 1000000;
vector<bool> p(MAXN, true);
int main()
{

    p[1] = 0;
    // p[2]=1;

    for (ll i = 2; i * i <= MAXN; i++)
    {
        if (p[i] == true)
        {
            for (ll j = i * i; j <= MAXN; j += i)
                p[j] = false;
        }
    }

    // cin>>n;
    ll n;
    while (cin >> n && n != 0)
    {

        if (!p[n])
            cout << n << " is not prime.\n";
        else
        {
            ll x = 0;
            for (ll i = n; i > 0;)
            {
                x += i % 10;
                i /= 10;
                x *= 10;
            }
            x /= 10;
            // cout << x << endl;
            if (p[x] && x != n)
                cout << n << " is emirp.\n";
            else
                cout << n << " is prime.\n";
        }
    }
}