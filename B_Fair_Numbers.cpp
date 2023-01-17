
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
        ll d = n;
        while (d != 0)
        {
            if (d % 10 == 0)
                d /= 10;
            else
            {
                if (n % (d % 10) == 0)
                    d /= 10;
                else
                {
                    n++;
                    d = n;
                }
            }
        }
        cout << n << endl;
    }
}