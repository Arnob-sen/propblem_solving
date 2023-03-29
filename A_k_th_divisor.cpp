#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 1000000;
vector<bool> p(MAXN, true);
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> d;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                d.push_back(n / i);
            else
            {
                d.push_back(i);
                d.push_back(n / i);
            }
        }
    }
    sort(d.begin(), d.end());
    if (k > d.size())
        cout << "-1" << endl;
    else
        cout << d[k - 1] << endl;
    // for (ll i : d)
    //     cout << i << " ";
}