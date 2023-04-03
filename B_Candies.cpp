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
        if (n % 2 == 0)
            cout << "-1\n";
        else
        {
            vector<ll> v;
            while (n > 1)
            {
                n /= 2;
                if (n % 2)
                    v.push_back(2);
                else
                {
                    v.push_back(1);
                    n++;
                }
            }
            cout << v.size() << endl;
            for (ll i = v.size() - 1; i >= 0; i--)
                cout << v[i] << " ";
            cout << endl;
        }
    }
}